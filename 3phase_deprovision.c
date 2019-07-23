#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void test1()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q2d9v/rq/dev/iox.411b19/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void test2()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q2d9v/rq/dev/iox.411b19/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void test3()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q2d9v/rq/dev/iox.411b19/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void test4()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q2d9v/rq/dev/iox.411b19/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void test5()
{
	pub_start("{\r\n \"action\": \"deprovision\"\r\n}", "glp/0/17q2d9v/rq/dev/iox.411b19/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
}
