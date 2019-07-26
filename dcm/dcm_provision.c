#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void dcm_provision_test1()
{
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q2d9v/rq/con/test10/do");

	sub_start("");
}

void dcm_provision_test2()
{
	pub_start("", "glp/0/17q2d9v/rq/con/test2/do");

	sub_start("glp/0/17q2d9v/fb/con/test2/sts");
	sub_start("glp/0/17q2d9v/fb/con/test2/sts");	
}

void dcm_provision_test3()
{
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q2d9v/rq/con/test2/do");

	sub_start("glp/0/17q2d9v/fb/con/test2/sts");
	sub_start("glp/0/17q2d9v/fb/con/test2/sts");
	sub_start("glp/0/17q2d9v/fb/con/test2/cfg");
}


