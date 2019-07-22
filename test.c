#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

void main()
{
//	char *p_message = "hello";
//	char *p_topic = "unnu";
//	sem_t lock;
//	sem_init(&lock, 0 ,1);
//	pthread_t pub_id, sub_id;
//	pthread_create(&pub_id, NULL, &pub_start, NULL);
//	pthread_create(&sub_id, NULL, &sub_start, "unnu");
//	pthread_join(pub_id, NULL);
//	pthread_join(sub_id, NULL);
	pub_start("hello_unmesh", "tyu");
	sub_start("tyu");
}
