#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("30", "glp/0/17q2d9v/rq/dev/iox/dio/if/dia/1/di-val/monitor/rate");
	sub_start("glp/0/./=logger/event");
}

void test2()
{
	pub_start("30", "glp/0/17q2d9v/rq/dev/iox/dio/if/di/1/di-vala/monitor/rate");
	sub_start("glp/0/./=logger/event");
}

void test3()
{
	pub_start("{\"monitor\":{\"rate\" : 100}}", "glp/0/17q2d9v/rq/dev/iox/meter/if/phase/0/nvoVoltageRMS");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/if/phase/0");
}

void test4()
{
	pub_start("{\"rate\" : 100}", "glp/0/17q2d9v/rq/dev/iox/meter/if/phase/0/nvoVoltageRMS/monitor");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/if/phase/0");
}

void test5()
{
	pub_start("20", "glp/0/17q2d9v/rq/dev/iox/meter/if/phase/0/nvoVoltageRMS/monitor/rate");
	sub_start("glp/0/17q2d9v/fb/dev/iox/meter/if/phase/0");
}

void main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
}
