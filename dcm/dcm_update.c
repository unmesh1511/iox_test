#include <stdio.h>
#include "my_sub.c"
#include "my_pub.c"

void dcm_update_test1()
{
	pub_start("'{\"action\": \"update\",\"args\": {\"sources\": [\"glp\/0\/17q2d9v\/fb\/dev\/iox.411b19\/dio\/if\/di\/2\/di-val\/value\"],\"destinations\": [\"glp\/0\/17q2d9v\/rq\/dev\/iox.411b19\/dio\/if\/relay\/1\/relay-val123\/value\"],\"policy\": \"smart\",\"map\":{\"level\":\"$.di-level.level\"}}}'", "glp/0/17q2d9v/rq/con/test20/do");

	sub_start("glp/0/17q2d9v/fb/con/test20/sts");
}

void dcm_update_test2()
{
	pub_start("'{\"action\": \"update\",\"args\": {\"sources\": [],\"destinations\": [\"glp\/0\/17q2d9v\/rq\/dev\/iox.411b19\/dio\/if\/relay\/1\/relay-val\/value\"],\"policy\": \"smart\",\"map\":{\"level\":\"$.di-level.level\"}}}'", "glp/0/17q2d9v/rq/con/test20/do");
	sub_start("");
}

void dcm_update_test3()
{
	pub_start("'{\"action\": \"update\",\"args\": {\"sources\": [\"glp\/0\/17q2d9v\/fb\/dev\/iox.411b19\/dio\/if\/di\/2\/di-val\/value\"],\"destinations\": [],\"policy\": \"smart\",\"map\":{\"level\":\"$.di-level.level\"}}}'", "glp/0/17q2d9v/rq/con/test20/do");

	sub_start("");
}

void dcm_update_test4()
{
	pub_start("'{\"action\": \"update\",\"args\": {\"sources\": [\"glp\/0\/17q2d9v\/fb\/dev\/iox.411b19\/dio\/if\/di\/2\/di-val\/value\"],\"destinations\": [\"glp\/0\/17q2d9v\/rq\/dev\/iox.411b19\/dio\/if\/relay\/2\/relay-val\/value\"],\"policy\": \"smart\",\"map\":{\"level\":\"$.di-level.level\"}}}'", "glp/0/17q2d9v/rq/con/test20/do");

	sub_start("glp/0/17q2d9v/fb/con/test20/sts");
	sub_start("glp/0/17q2d9v/fb/con/test20/cfg");
}

