#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("", "glp/0/17q2d9v/rq/dev/iox/meter/if/phase/0");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/if/phase/0");
}

void test2()
{
	pub_start("", "glp/0/17q2d9v/rq/dev/iox/meter/if/phase/0");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/if/phase/0");
}

void test3()
{
	pub_start("", "glp/0/17q2d9v/rq/dev/iox/meter/if/phase/0");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/if/phase/0");
}

void test4()
{
	pub_start("", "glp/0/17q2d9v/rq/dev/iox/meter/if/phase/0");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/if/phase/0");
}
void main()
{
	test1();
	test2();
	test3();
	test4();
}
