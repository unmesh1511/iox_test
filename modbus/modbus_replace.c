#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void modbus_replace_test1()
{
	pub_start("{\r\n \"action\": \"replace\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_replace_test2()
{
	pub_start("{\r\n  \"action\": \"replace\",\r\n  \"args\": {\r\n    \"unid\": \"01:43\"\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_replace_test3()
{
	pub_start("{\r\n  \"action\": \"replace\",\r\n  \"args\": {\r\n    \"unid\": \"1000\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_replace_test4()
{
	pub_start("{\r\n  \"action\": \"replace\",\r\n  \"args\": {\r\n    \"unid\": \"01:1\"\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_replace_test5()
{
	pub_start("{\r\n  \"action\": \"replace\",\r\n  \"args\": {\r\n    \"unid\": \"01:2\"\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

