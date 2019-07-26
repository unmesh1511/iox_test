#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void dcm_deprovision_test1()
{
	pub_start("'{\"action\":\"deprovision\"}'", "glp/0/17q2d9v/rq/con/test11/do");

	sub_start("glp/0/17q2d9v/fb/con/test11/sts");
}

void dcm_deprovision_test2()
{
	pub_start("'{\"action\":\"deprovision\"}'", "glp/0/17q2d9v/rq/con/test0/do");

	sub_start("");
}

void dcm_deprovision_test3()
{
	pub_start("'{\"action\":\"deprovision\"}'", "glp/0/17q2d9v/rq/con/test2/do");
	sub_start("glp/0/17q2d9v/fb/con/test2/sts");
	sub_start("glp/0/17q2d9v/fb/con/test2/cfg");
}


