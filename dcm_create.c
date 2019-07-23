#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void test1()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[\"glp\/0\/17q2d9v\/fb\/dev\/iox.411b19\/dio\/if\/di\/1\/di-val123\/value\"],\"destinations\":[\"glp\/0\/17q2d9v\/rq\/dev\/iox.411b19\/dio\/if\/relay\/1\/relay-val\/value\"],\"policy\":\"smart\",\"map\":{\"level\":\"$.di-level.level\"}}}'", "glp/0/17q2d9v/rq/con/test0/do");

	sub_start("glp/0/17q2d9v/fb/con/test0/sts");
}

void test2()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[],\"destinations\":[\"glp\/0\/17q2d9v\/rq\/dev\/iox.411b19\/dio\/if\/relay\/0\/relay-val\/value\"],\"policy\":\"smart\",\"map\":{\"level\":\"$.di-level.level\"}}}'", "glp/0/17q2d9v/rq/con/test0/do");

	sub_start("");
}

void test3()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[\"glp\/0\/17q2d9v\/fb\/dev\/iox.411b19\/dio\/if\/di\/0\/di-val\/value\"],\"destinations\":[],\"policy\":\"smart\",\"map\":{\"level\":\"$.di-level.level\"}}}'", "glp/0/17q2d9v/rq/con/test0/do");

	sub_start("");
}

void test4()
{
	pub_start("'{\"action\":\"create\",\"args\":{\"sources\":[\"glp\/0\/17q2d9v\/fb\/dev\/iox.411b19\/dio\/if\/di\/1\/di-val\/value\"],\"destinations\":[\"glp\/0\/17q2d9v\/rq\/dev\/iox.411b19\/dio\/if\/relay\/1\/relay-val\/value\"],\"policy\":\"smart\",\"map\":{\"level\":\"$.di-level.level\"}}}'", "glp/0/17q2d9v/rq/con/test2/do");

	sub_start("glp/0/17q2d9v/fb/con/test2/sts");
	sub_start("glp/0/17q2d9v/fb/con/test2/cfg");
}




void main()
{
	test1();
	test2();
	test3();
	test4();
}
