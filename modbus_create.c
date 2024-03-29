#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("{\r\n \"action\": \"create\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test2()
{
	
}

void test3()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900014150040DB00\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/cfg");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
}

void test4()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900014150040DB00\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test5()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900000000000DB00\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test6()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900014150040DB00\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/new_device.0/do");
	sub_start("glp/0/./=logger/event");
}

void test7()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900014150040DB00\",\r\n \"provision\": \"true\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test8()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900014150040DB00\",\r\n \"provision\": \"false\",\r\n \"unid\": \"01:43\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/cfg");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
}

void test9()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900014150040DB00\",\r\n \"provision\": \"true\",\r\n \"unid\": \"abcd\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/./=logger/event");
}

void test10()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900014150040DB00\",\r\n \"provision\": \"true\",\r\n \"unid\": \"01:1\"\r\n }\r\n}", "glp/0/17q3jbh/rq/dev/iox/pm820/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/cfg");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
	sub_start("glp/0/17q3jbh/fb/res/type/blk.900014150040DB00/0");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/if/block/0");
	sub_start("glp/0/17q3jbh/fb/dev/iox/pm820/sts");
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
	test9();
	test10();
}

