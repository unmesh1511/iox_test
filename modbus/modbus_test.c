#include <stdio.h>
#include "my_sub.h"
#include "my_pub.h"

void modbus_test_test1()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void modbus_test_test2()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
}

void modbus_test_test3()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
}

void modbus_test_test4()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
}

void modbus_test_test5()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
}

void modbus_test_test6()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

