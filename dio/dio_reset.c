#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void dio_reset1()
{
	pub_start("{\r\n \"action\": \"reset\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void main()
{
	dio_reset1();
}

