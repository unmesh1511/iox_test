#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void dcm_Create_test1()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[\"glp\/0\/17q3kc1\/fb\/dev\/iox.411b19\/pm820\/if\/block\/0\/Voltage_A-N\/value\"],\"destinations\":[\"glp\/0\/17q3kc1\/rq\/dev\/iox.411b19\/dio\/if\/do\/1\/do-val123\/value\"],\"policy\":\"smart\",\"map\":{\"frequency\":\"$\"}}}'", "glp/0/17q3kc1/rq/con/test1/do");

	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/cfg");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/cfg");
}

void dcm_Create_test2()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[],\"destinations\":[\"glp\/0\/17q3kc1\/rq\/dev\/iox.411b19\/dio\/if\/do\/1\/do-val\/value\"],\"policy\":\"smart\",\"map\":{\"frequency\":\"$\"}}}'", "glp/0/17q3kc1/rq/con/test1/do");

}

void dcm_Create_test3()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[\"glp\/0\/17q3kc1\/fb\/dev\/iox.411b19\/pm820\/if\/block\/0\/Voltage_A-N\/value\"],\"destinations\":[],\"policy\":\"smart\",\"map\":{\"frequency\":\"$\"}}}'", "glp/0/17q3kc1/rq/con/test0/do");
}

void dcm_Create_test4()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[\"glp\/0\/17q3kc1\/fb\/dev\/iox.411b19\/pm820\/if\/block\/0\/Voltage_A-N\/value\"],\"destinations\":[\"glp\/0\/17q3kc1\/rq\/dev\/iox.411b19\/dio\/if\/do\/1\/do-val\/value\"],\"policy\":\"smart\",\"map\":{\"frequency\":\"$\"}}}'", "glp/0/17q3kc1/rq/con/test0/do");

	sub_start("glp/0/17q3kc1/fb/con/test0/sts");
	sub_start("glp/0/17q3kc1/fb/con/test0/cfg");
}

void main()
{
	dcm_Create_test1();
	dcm_Create_test2();
	dcm_Create_test3();
	dcm_Create_test4();
}
