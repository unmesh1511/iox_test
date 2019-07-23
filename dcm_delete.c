#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void test1()
{
	pub_start("'{\"action\":\"delete\"}'", "glp/0/17q2d9v/rq/con/test30/do");

	sub_start("");
}

void test2()
{
	pub_start("'{\"action\":\"delete\"}'", "glp/0/17q2d9v/rq/con/test20/do");
	sub_start("glp/0/17q2d9v/fb/con/test20/sts");
	sub_start("glp/0/17q2d9v/fb/con/test20/cfg");
}

void test3()
{
	pub_start("'{\"action\":\"delete\"}'", "glp/0/17q2d9v/rq/con/test11/do");

	sub_start("glp/0/17q2d9v/fb/con/test11/sts");
}

void main()
{
	test1();
	test2();
	test3();
}
