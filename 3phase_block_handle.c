#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("", "glp/0/17q2d9v/rq/dev/iox/meter/if/phase/0");




	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void test2()
{
	pub_start("", "glp/0/17q2d9v/rq/dev/iox/meter/if/phase/1");
	sub_start("glp/0/17q2d9v/ev/error");
}



void main()
{
	test1();
	test2();
}
