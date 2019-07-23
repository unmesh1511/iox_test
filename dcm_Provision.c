#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void test1()
{
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q3kc1/rq/con/test3/do");

}

void test2()
{	
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q3kc1/rq/con/test1/do");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");

}

void test3()
{
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q3kc1/rq/con/test1/do");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/cfg");
}

void main()
{
	test1();
	test2();
	test3();
}
