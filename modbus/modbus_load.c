#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void modbus_load_test1()
{
	pub_start("{\r\n \"action\": \"load\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

