#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void dcm_Delete_test1()
{
	pub_start("'{\"action\":\"delete\"}'", "glp/0/17q3kc1/rq/con/test0/do");
}

void dcm_Delete_test2()
{	

	pub_start("'{\"action\":\"delete\"}'", "glp/0/17q3kc1/rq/con/test1/do");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/cfg");
}

void dcm_Delete_test3()
{
	pub_start("'{\"action\":\"delete\"}'", "glp/0/17q3kc1/rq/con/test0/do");
	sub_start("glp/0/17q3kc1/fb/con/test0/sts");
	sub_start("glp/0/17q3kc1/fb/con/test0/cfg");
}

void main()
{
	dcm_Delete_test1();
	dcm_Delete_test2();
	dcm_Delete_test3();
}
