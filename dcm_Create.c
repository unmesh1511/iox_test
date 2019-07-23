#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void test1()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[\"glp\/0\/17q3kc1\/fb\/dev\/iox.411b19\/pm820\/if\/block\/0\/Voltage_A-N\/value\"],\"destinations\":[\"glp\/0\/17q3kc1\/rq\/dev\/iox.411b19\/dio\/if\/do\/1\/do-val123\/value\"],\"policy\":\"smart\",\"map\":{\"frequency\":\"$\"}}}'", "glp/0/17q3kc1/rq/con/test1/do");

	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/cfg");
	sub_start("glp/0/17q3kc1/fb/con/test1/sts");
	sub_start("glp/0/17q3kc1/fb/con/test1/cfg");
}

void test2()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[],\"destinations\":[\"glp\/0\/17q3kc1\/rq\/dev\/iox.411b19\/dio\/if\/do\/1\/do-val\/value\"],\"policy\":\"smart\",\"map\":{\"frequency\":\"$\"}}}'", "glp/0/17q3kc1/rq/con/test1/do");

}

void test3()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[\"glp\/0\/17q3kc1\/fb\/dev\/iox.411b19\/pm820\/if\/block\/0\/Voltage_A-N\/value\"],\"destinations\":[],\"policy\":\"smart\",\"map\":{\"frequency\":\"$\"}}}'", "glp/0/17q3kc1/rq/con/test0/do");
}

void test4()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[\"glp\/0\/17q3kc1\/fb\/dev\/iox.411b19\/pm820\/if\/block\/0\/Voltage_A-N\/value\"],\"destinations\":[\"glp\/0\/17q3kc1\/rq\/dev\/iox.411b19\/dio\/if\/do\/1\/do-val\/value\"],\"policy\":\"smart\",\"map\":{\"frequency\":\"$\"}}}'", "glp/0/17q3kc1/rq/con/test0/do");

	sub_start("glp/0/17q3kc1/fb/con/test0/sts");
	sub_start("glp/0/17q3kc1/fb/con/test0/cfg");
}

void main()
{
	test1();
	test2();
	test3();
	test4();
}
