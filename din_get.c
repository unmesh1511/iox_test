#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.411b19\/dio\/if\/di\/1\/di-val\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}", "glp/0/./=get/dp/request");
	sub_start("my/responses");
}

void test2()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.411b191212\/dio\/if\/di\/1\/di-val\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}", "glp/0/./=get/dp/request");
	sub_start("my/responses");
}

void test3()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.411b19\/dioaww\/if\/di\/1\/di-val\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}", "glp/0/./=get/dp/request");
	sub_start("my/responses");
}

void test4()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.411b19\/dio\/if\/di\/10\/di-val\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}", "glp/0/./=get/dp/request");
	sub_start("my/responses");
}

void test5()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.411b19\/dio\/if\/di\/1\/di-valasd\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}", "glp/0/./=get/dp/request")
	sub_start("my/responses");
}

void test6()
{
	pub_start("{\r\n  \"corr\": \"abcd\",\r\n  \"response\": \"my\/responses\",\r\n  \"item\": [\r\n    \"dev\/iox.411b19\/dio\/if\/di\/1\/di-val\",\r\n    \"dev\/iox.411b19\/dio\/if\/di\/2\/di-val\"\r\n  ],\r\n  \"maxAge\": 1,\r\n  \"timeout\": 10\r\n}", "glp/0/./=get/dp/request");
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

