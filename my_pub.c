#include <mosquitto.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <semaphore.h>

struct mosquitto *mosq_pub = NULL;
int pub_connect = 0;

void pub_connect_callback(struct mosquitto *mosq, void *obj, int rc)
{
	switch (rc) {
		case 0:
			printf("publisher connected successfully\n");
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

void pub_disconnect_callback(struct mosquitto *mosq, void *obj, int rc)
{
	if (rc == 0) {
		printf("mosquitto_disconect was called\n");
	}
	else {
		printf("unexpected disconnect\n");
	}
}

void pub_publish_callback(struct mosquitto *mosq, void *obj, int mid)
{
	printf("message with message id : %d has been published\n", mid);
}

void pub_setup()
{
	mosquitto_lib_init();
	// create a new mosquitto client
	mosq_pub = mosquitto_new(NULL, true, NULL);
	if(!mosq_pub){
		fprintf(stderr, "Error: Out of memory.\n");
		exit(1);	
	}
	mosquitto_connect_callback_set(mosq_pub, pub_connect_callback);
	mosquitto_disconnect_callback_set(mosq_pub, pub_disconnect_callback);
	mosquitto_publish_callback_set(mosq_pub, pub_publish_callback);
	
	//connect to mosq broker
	char *host="localhost";
	int port=1883;
	int keepalive=60;
	if(mosquitto_connect(mosq_pub, host, port, keepalive)){
		fprintf(stderr,"unable to connect\n");
		exit(1);
	}
	pub_connect = 1;
	// start loop
	int loop=mosquitto_loop_start(mosq_pub);
	if(loop != MOSQ_ERR_SUCCESS){
    		fprintf(stderr, "Unable to start loop: %i\n", loop);
    		exit(1);
 	 }

	
}

int  mqtt_send(char *buff, char *topic)
{
	return(mosquitto_publish(mosq_pub, NULL, topic, strlen(buff), buff, 0, 1));
}

void pub_start(char *message, char *topic)
{
//	sem_wait(&lock);

	printf("\n");
	pub_setup();
	int snd = mqtt_send(message, topic);
	if (snd!=0) printf("mqtt send error=%i\n",snd);		
	if (pub_connect == 1) {
		mosquitto_disconnect(mosq_pub);
		mosquitto_destroy(mosq_pub);
	}

	mosquitto_lib_cleanup();

//	sem_post(&lock);
}
