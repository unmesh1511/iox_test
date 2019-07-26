#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void modbus_provision_test1()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"01:1\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_provision_test2()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": { }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_provision_test3()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"3000\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_provision_test4()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"01:1\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_provision_test5()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"01:1\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
}

void modbus_provision_test6()
{
	pub_start("\r\n{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"01:3\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_provision_test7()
{
	pub_start("{\r\n \"action\": \"provision\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_provision_test8()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"17\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

