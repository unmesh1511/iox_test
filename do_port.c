#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("{\r\n\"do-val\": {\r\n            \"value\": {\r\n            \"type\": \"level\",\r\n            \"level\": true,\r\n            \"frequency\":0,\r\n            \"pulse\": 0,\r\n            \"pwm\":{\r\n                \"frequency\":0,\r\n                \"duty-cycle\":0\r\n               }\r\n             }\r\n       }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/do/1");

	sub_start("glp/0/17q2d9v/fb/dev/iox/dio/if/do/1");
}

void test2()
{
	pub_start("{\r\n\"do-val\": {\r\n            \"value\": {\r\n            \"type\": \"level\",\r\n            \"level\": true,\r\n            \"frequency\":0,\r\n            \"pulse\": 0,\r\n            \"pwm\":{\r\n                \"frequency\":0,\r\n                \"duty-cycle\":0\r\n               }\r\n             }\r\n       }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/do/2");

	sub_start("glp/0/17q2d9v/fb/dev/iox/dio/if/do/2");
}

void test3()
{
	pub_start("{\r\n\"do-val\": {\r\n            \"value\": {\r\n            \"type\": \"level\",\r\n            \"level\": true,\r\n            \"frequency\":0,\r\n            \"pulse\": 0,\r\n            \"pwm\":{\r\n                \"frequency\":0,\r\n                \"duty-cycle\":0\r\n               }\r\n             }\r\n       }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/do/3");

	sub_start("glp/0/17q2d9v/fb/dev/iox/dio/if/do/3");
}

void test4()
{
	pub_start("{\r\n\"do-val\": {\r\n            \"value\": {\r\n            \"type\": \"level\",\r\n            \"level\": true,\r\n            \"frequency\":0,\r\n            \"pulse\": 0,\r\n            \"pwm\":{\r\n                \"frequency\":0,\r\n                \"duty-cycle\":0\r\n               }\r\n             }\r\n       }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/do/4");

	sub_start("glp/0/17q2d9v/fb/dev/iox/dio/if/do/4");
}

void test5()
{
	pub_start("{\r\n\"do-val\": {\r\n            \"value\": {\r\n            \"type\": \"level\",\r\n            \"level\": true,\r\n            \"frequency\":0,\r\n            \"pulse\": 0,\r\n            \"pwm\":{\r\n                \"frequency\":0,\r\n                \"duty-cycle\":0\r\n               }\r\n             }\r\n       }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/do/5");

	sub_start("glp/0/17q2d9v/fb/dev/iox/dio/if/do/5");
}

void test6()
{
	pub_start("{\r\n\"do-val\": {\r\n            \"value\": {\r\n            \"type\": \"level\",\r\n            \"level\": true,\r\n            \"frequency\":0,\r\n            \"pulse\": 0,\r\n            \"pwm\":{\r\n                \"frequency\":0,\r\n                \"duty-cycle\":0\r\n               }\r\n             }\r\n       }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/do/6");

	sub_start("glp/0/17q2d9v/fb/dev/iox/dio/if/do/6");
}

void test7()
{
	pub_start("{\r\n\"do-val\": {\r\n            \"value\": {\r\n            \"type\": \"level\",\r\n            \"level\": true,\r\n            \"frequency\":0,\r\n            \"pulse\": 0,\r\n            \"pwm\":{\r\n                \"frequency\":0,\r\n                \"duty-cycle\":0\r\n               }\r\n             }\r\n       }\r\n}", "glp/0/17q2d9v/rq/dev/iox/dio/if/do/8");

	sub_start("glp/0/17q2d9v/fb/dev/iox/dio/if/do/8");
}

void main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
}

