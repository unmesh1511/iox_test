#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"256\"\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/sts");
}

void test2()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": { }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/sts");
}

void test3()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"abcd\"\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/sts");
}

void test4()
{
	pub_start("{\r\n \"action\": \"provision\"\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/sts");
}

void test5()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"257\"\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/sts");
}

void test6()
{
	pub_start("{\r\n \"action\": \"provision\"\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/sts");
}

void test7()
{
	pub_start("{\r\n \"action\": \"provision\"\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/sts");
}

void main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
}
