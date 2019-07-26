#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void modbus_deprovision_test1()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_deprovision_test2()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_deprovision_test3()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
}

void modbus_deprovision_test4()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_deprovision_test5()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}
