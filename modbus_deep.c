#include <stdio.h>
#include "my_sub.h"
#include "my_pub.c"

void test1()
{
	pub_start("{\r\n  \"Voltage_A-B\": {\r\n    \"monitor\": {\r\n      \"rate\": 10\r\n    }\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/dummy/if/block/7");
	sub_start("glp/0/./=logger/event");
}

void test2()
{
	pub_start("{\r\n  \"dummy\": {\r\n    \"monitor\": {\r\n      \"rate\": 10\r\n    }\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/dummy/if/block/1");
	sub_start("glp/0/./=logger/event");
}
	
void test3()
{
	pub_start("{\r\n  \"Voltage_A-B\": {\r\n    \"monitor\": {\r\n      \"rate\": 10\r\n    }\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/if/block/1");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/if/block/1");
}

void test4()
{
	pub_start("{\r\n  \"monitor\": {\r\n    \"rate\": 20\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/if/block/1/Voltage_A-B");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/if/block/1");
}

void test5()
{
	pub_start("{\r\n  \"rate\": 30\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/if/block/1/Voltage_A-B/monitor");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/if/block/1");
}

void test6()
{
	pub_start("40", "glp/0/17q3jbh/rq/dev/iox/pm820/if/block/1/Voltage_A-B/monitor/rate");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/if/block/1");
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
