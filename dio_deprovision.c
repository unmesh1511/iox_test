#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void test2()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");

}

void test3()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
}

void test4()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
}





void main()
{
	test1();
	test2();
	test3();
	test4();
}

