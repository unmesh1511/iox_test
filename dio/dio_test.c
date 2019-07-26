#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void dio_test1()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void dio_test2()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");

}

void dio_test3()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
}

void dio_test4()
{
	pub_start("{\r\n \"action\": \"test\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
}

void main()
{
	dio_test1();
	dio_test2();
	dio_test3();
	dio_test4();
}

