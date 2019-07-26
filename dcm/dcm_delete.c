#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void dcm_delete_test1()
{
	pub_start("'{\"action\":\"delete\"}'", "glp/0/17q2d9v/rq/con/test30/do");

	sub_start("");
}

void dcm_delete_test2()
{
	pub_start("'{\"action\":\"delete\"}'", "glp/0/17q2d9v/rq/con/test20/do");
	sub_start("glp/0/17q2d9v/fb/con/test20/sts");
	sub_start("glp/0/17q2d9v/fb/con/test20/cfg");
}

void dcm_delete_test3()
{
	pub_start("'{\"action\":\"delete\"}'", "glp/0/17q2d9v/rq/con/test11/do");

	sub_start("glp/0/17q2d9v/fb/con/test11/sts");
}


