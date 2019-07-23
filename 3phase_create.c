#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("{\r\n \"action\": \"create\"\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
}

void test2()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"ABCDEFG\"\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
}

void test3()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"meter\"\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
}

void test4()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"meter\"\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
}

void test5()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"ABCDEFG\"\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
}

void test6()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"meter\",\r\n \"provision\": true\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/amik_1/do");
	sub_start("glp/0/./=logger/event");
}

void test7()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"meter\",\r\n \"provision\": true,\r\n \"unid\": \"abcd\"\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
}

void test8()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"meter\",\r\n \"provision\": \"true\",\r\n \"unid\": \"257\"\r\n }\r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
}

void test9()
{
	pub_start("{\r\n    \"action\":\"create\",\r\n    \"args\": {\r\n       \"unid\":\"257\",\r\n       \"type\":\"meter\",\r\n       \"provision\":false\r\n    }  \r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
	sub_start("glp/0/./=logger/event");
}

void test10()
{
	pub_start("{\r\n    \"action\":\"create\",\r\n    \"args\": {\r\n       \"unid\":\"257\",\r\n       \"type\":\"meter\",\r\n       \"provision\":true\r\n    }  \r\n}", "glp/0/17q2d9v/rq/dev/iox/meter/do");
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
	test9();
	test10();
}
