#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void dio_deprovision1()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void dio_deprovision2()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");

}

void dio_deprovision3()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
}

void dio_deprovision4()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
}

void main()
{
	dio_deprovision1();
	dio_deprovision2();
	dio_deprovision3();
	dio_deprovision4();
}

