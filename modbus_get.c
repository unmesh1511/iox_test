#include <stdio.h>
#include "my_sub.h"
#include "my_pub.c"

void test1()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.500000\/pm820\/if\/block\/1\/Voltage_A-B\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}", "glp/0/./=get/dp/request");

	sub_start("my/responses");
}

void test2()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.409eb1\/dummy\/if\/block\/1\/Voltage_A-B\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}\r\n", "glp/0/./=get/dp/request");

	sub_start("my/responses");
}

void test3()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.409eb1\/pm820\/if\/block\/100\/Voltage_A-B\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}\r\n", "glp/0/./=get/dp/request");

	sub_start("my/responses");
}

void test4()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.409eb1\/pm820\/if\/block\/1\/dummy\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}\r\n", "glp/0/./=get/dp/request");

	sub_start("my/responses");
}

void test5()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.409eb1\/pm820\/if\/block\/1\/Voltage_A-B\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}\r\n", "glp/0/./=get/dp/request");

	sub_start("my/responses");
}

void test6()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.409eb1\/pm820\/if\/block\/1\/Voltage_A-B\",\r\n    \"dev\/iox.409eb1\/pm820\/if\/block\/1\/Voltage_B-C\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}\r\n", "glp/0/./=get/dp/request");

	sub_start("my/responses");
}
	
void main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
}
