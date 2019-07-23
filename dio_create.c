#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"
#include "json_parser.c"
#include "err_header.h"

void result(int rc)
{
	switch (rc) {
		case 0:
			printf("FAILED\n");
			break;
		case 1:
			printf("PASSED\n");
			break;
		case -1:
			printf("unable to parse\n");
			break;
	}
}

void test1()
{
	int result;
	pub_start("{\r\n \"action\": \"create\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	result(parser(msg_copy, ERR_PARSE_ARGS));
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
}

void test2()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900001050304DD00\"\r\n }\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	result(parser(msg_copy, ERR_UNIT_ID));
}

void test3()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900001050304DD00\"\r\n }\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	result(parser(msg_copy, ERR_UNIT_ID));
}

void test4()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900001050304DD00\"\r\n }\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	result(parser(msg_copy, ERR_UNIT_ID));
}

void test5()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900001050304DD00\"\r\n }\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	result(parser(msg_copy, ERR_UNIT_ID));
}

void test6()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900001050304DD00\",\r\n \"provision\": true\r\n }\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	result(parser(msg_copy, ERR_UNIT_ID));
}

void test7()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900001050304DD00\",\r\n \"provision\": false,\r\n \"unid\": \"256\"\r\n }\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
}

void test8()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900001050304DD00\",\r\n \"provision\": true,\r\n \"unid\": \"abcd\"\r\n }\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	result(parser(msg_copy, ERR_DEVICE_CREATE));
}

void test9()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"args\": {\r\n \"type\": \"900001050304DD00\",\r\n \"provision\": \"true\",\r\n \"unid\": \"256\"\r\n }\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/./=logger/event");
	result(parser(msg_copy, ERR_INVALID_PROVISION));
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
}

