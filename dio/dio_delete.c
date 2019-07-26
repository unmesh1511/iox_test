#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void dio_delete1()
{
	pub_start("{\r\n \"action\": \"delete\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
	sub_start("glp/0/17q2d9v/ev/error");
}

void dio_delete2()
{
	pub_start("{\r\n \"action\": \"delete\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");

}

void dio_delete3()
{
	pub_start("{\r\n \"action\": \"delete\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
}

void dio_delete4()
{
	pub_start("{\r\n \"action\": \"delete\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
}

void dio_delete5()
{
	pub_start("{\r\n \"action\": \"delete\"\r\n}","glp/0/17q2d9v/rq/dev/iox/dio/do");
	sub_start("glp/0/17q3jbh/fb/dev/iox/sys/sts");
	sub_start("glp/0/./=logger/event");
}



void main()
{
	dio_delete1();
	dio_delete2();
	dio_delete3();
	dio_delete4();
	dio_delete5();
}

