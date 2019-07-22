#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("'{\r\n            \"frequency\":10\r\n}'", "glp/0/17q3kc1/rq/dev/iox/dio/if/dqo/1/do-val/value");
	sub_start("glp/0/./=logger/event");
}

void test2()
{
	pub_start("'{\r\n            \"frequency\":10\r\n}'", "glp/0/17q3kc1/rq/dev/iox/dio/if/do/1/do-val123/value");
	sub_start("glp/0/./=logger/event");
}
void test3()
{
	pub_start("'{\r\n\"do-val\": {\r\n            \"value\": {\r\n            \"type\": \"frequency\",\r\n            \"level\": false,\r\n            \"frequency\":10,\r\n            \"pulse\": 300,\r\n            \"pwm\":{\r\n                \"frequency\":20000,\r\n                \"duty-cycle\":90\r\n               }\r\n             }\r\n       }\r\n}'", "glp/0/17q3kc1/rq/dev/iox/dio/if/do/1");
	sub_start("glp/0/17q3kc1/fb/dev/iox/dio/if/do/1");
}

void test4()
{
	pub_start("'{\r\n            \"value\": {\r\n            \"type\": \"frequency\",\r\n            \"level\": false,\r\n            \"frequency\":1,\r\n            \"pulse\": 300,\r\n            \"pwm\":{\r\n                \"frequency\":20000,\r\n                \"duty-cycle\":90\r\n               }\r\n             }\r\n}'", "glp/0/17q3kc1/rq/dev/iox/dio/if/do/1/do-val");
	sub_start("glp/0/17q3kc1/fb/dev/iox/dio/if/do/1");
}

void test5()
{	
	pub_start("'{\r\n            \"frequency\":10\r\n}'", "glp/0/17q3kc1/rq/dev/iox/dio/if/do/1/do-val/value");
	sub_start("glp/0/17q3kc1/fb/dev/iox/dio/if/do/1");
}

void test6()
{
	pub_start("{\r\n\"do-val\": {\r\n            \"value\": {\r\n            \"type\": \"pulse\",\r\n            \"level\": true,\r\n            \"frequency\"0,\r\n            \"pulse\": \"test\",\r\n            \"pwm\":{\r\n                \"frequency\":20000,\r\n                \"duty-cycle\":90\r\n               }\r\n             }\r\n       }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/do/1");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}


void main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
}

