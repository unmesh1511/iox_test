#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"01:1\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test2()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": { }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test3()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"3000\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test4()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"01:1\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test5()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"01:1\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
}

void test6()
{
	pub_start("\r\n{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"01:3\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test7()
{
	pub_start("{\r\n \"action\": \"provision\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test8()
{
	pub_start("{\r\n \"action\": \"provision\",\r\n \"args\": {\r\n \"unid\": \"17\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
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
	test8();
}

