#include<mosquitto.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include <semaphore.h>

//extern sem_t lock;
struct mosquitto *mosq_sub = NULL;

int sub_connect = 0;

void sub_connect_callback(struct mosquitto *mosq, void *obj, int rc)
{
	switch (rc) {
		case 0:
			printf("subscriber  connected successfully\n");
			break;
		case 1:
			printf("connection refused (unacceptable protocol version)\n");
			break;
		case 2:
			printf("connection refused (identifier rejected)\n");
			break;
		case 3:
			printf("connection refused (broker unavailable)\n");
			break;
		case 4:
			printf("reserved for future use\n");
			break;
	}
}

void sub_disconnect_callback(struct mosquitto *mosq, void *obj, int rc)
{
	if (rc == 0) {
		printf("mosquitto_disconect was called\n");
	}
	else {
		printf("unexpected disconnect\n");
	}
}

void sub_subscribe_callback(struct mosquitto *mosq, void *obj, int mid, int qos_count, const int *granted_qos)
{
	printf("subscription success\n");
}

void sub_message_callback(struct mosquitto *mosq, void *obj, const struct mosquitto_message *message)
{
	printf("message: %s\n", (char*) message->payload);


}

void sub_setup()
{
	mosquitto_lib_init();
	// create a new mosquitto client
	mosq_sub = mosquitto_new(NULL, true, NULL);
	if (!mosq_sub){
		fprintf(stderr, "Error: Out of memory.\n");
		exit(1);	
	}
	mosquitto_connect_callback_set(mosq_sub, sub_connect_callback);
	mosquitto_disconnect_callback_set(mosq_sub, sub_disconnect_callback);
	mosquitto_subscribe_callback_set(mosq_sub, sub_subscribe_callback);
	mosquitto_message_callback_set(mosq_sub, sub_message_callback);

	//connect to mosq broker
	char *host="localhost";
	int port=1883;
	int keepalive=2000;
	if(mosquitto_connect(mosq_sub, host, port, keepalive)){
		fprintf(stderr,"unable to connect\n");
		exit(1);
	}
	sub_connect = 1;
	// start loop
	int loop=mosquitto_loop_start(mosq_sub);
	if(loop != MOSQ_ERR_SUCCESS){
    		fprintf(stderr, "Unable to start loop: %i\n", loop);
    		exit(1);
 	 }

	
}

int  mqtt_sub(char *topic)
{
	if(mosquitto_subscribe(mosq_sub, NULL, topic, 0)!=0){
		printf("unable to subscribe\n");	
		exit(1);
	}
//	mosquitto_reconnect(mosq_sub);
}

void sub_start(char *topic)
{
//	sleep(5);
//	sem_wait(&lock);
	sub_setup();
	int snd = mqtt_sub(topic);
  	while (1);
	if (sub_connect == 1) {
		mosquitto_disconnect(mosq_sub);
		mosquitto_destroy(mosq_sub);
	}
	mosquitto_lib_cleanup();
//	sem_post(&lock);
}
