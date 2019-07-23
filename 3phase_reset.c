#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void test1()
{
	pub_start("{\r\n \"action\": \"reset\"\r\n}", "glp/0/17q2d9v/rq/dev/iox.411b19/meter/do");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}



void main()
{
	test1();
}
