#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"
#include "json_parser.c"
#include "iox_error.h"

void test1()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"message\":\"Error in parsing args data\"\r\n}", "glp");

	sub_start("glp");
	printf("%d\n",parser(msg_copy, ERR_PARSE_ARGS));
}

void main()
{
	test1();
}
