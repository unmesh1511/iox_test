#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void relay_port_test1()
{
	pub_start("{\r\n\"relay-val\": {\r\n            \"value\": {\r\n            \"level\": true\r\n              }       \r\n         }\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/if/relay/1");
	sub_start("glp/0/17q2d9v/fb/dev/iox/dio/if/relay/1");
}

void relay_port_test2()
{
	pub_start("{\r\n\"relay-val\": {\r\n            \"value\": {\r\n            \"level\": true\r\n              }       \r\n         }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/relay/2");
	sub_start("glp/0/17q2d9v/fb/dev/iox/dio/if/relay/2");
}

void relay_port_test3()
{
	pub_start("{\r\n\"relay-val\": {\r\n            \"value\": {\r\n            \"level\": true\r\n              }       \r\n         }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/relay/3");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

