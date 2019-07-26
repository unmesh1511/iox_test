#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void dcm_Provision_test1()
{
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q3kc1/rq/con/test3/do");

}

void dcm_Provision_test2()
{	
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q3kc1/rq/con/test1/do");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");

}

void dcm_Provision_test3()
{
	pub_start("'{\"action\":\"provision\"}'", "glp/0/17q3kc1/rq/con/test1/do");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/cfg");
}

void main()
{
	dcm_Provision_test1();
	dcm_Provision_test2();
	dcm_Provision_test3();
}
