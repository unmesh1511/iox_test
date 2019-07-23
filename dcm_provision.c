#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void test1()
{
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q2d9v/rq/con/test10/do");

	sub_start("");
}

void test2()
{
	pub_start("", "glp/0/17q2d9v/rq/con/test2/do");

	sub_start("glp/0/17q2d9v/fb/con/test2/sts");
	sub_start("glp/0/17q2d9v/fb/con/test2/sts");	
}

void test3()
{
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q2d9v/rq/con/test2/do");

	sub_start("glp/0/17q2d9v/fb/con/test2/sts");
	sub_start("glp/0/17q2d9v/fb/con/test2/sts");
	sub_start("glp/0/17q2d9v/fb/con/test2/cfg");
}

void main()
{
	test1();
	test2();
	test3();
}
