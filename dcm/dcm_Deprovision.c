#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void dcm_Deprovision_test1()
{
	pub_start("'{\"action\":\"deprovision\"}'", "glp/0/17q3kc1/rq/con/test2/do");
	sub_start("glp/0/17q3kc1/fb/con/test2/sts");

}

void dcm_Deprovision_test2()
{	
	pub_start("'{\"action\":\"deprovision\"}'", "glp/0/17q2d9v/rq/con/test0/do");

}

void dcm_Deprovision_test3()
{
	pub_start("'{\"action\":\"deprovision\"}'", "glp/0/17q3kc1/rq/con/test0/do");
	sub_start("glp/0/17q3kc1/fb/con/test0/sts");
	sub_start("glp/0/17q3kc1/fb/con/test0/cfg");
}

void main()
{
	dcm_Deprovision_test1();
	dcm_Deprovision_test2();
	dcm_Deprovision_test3();
}
