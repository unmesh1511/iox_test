#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"
#include "json_parser.c"
#include "err_header.h"

void test1()
{
	pub_start("{\r\n \"action\": \"create\",\r\n \"message\":\"Error in parsing args data\"\r\n}", "glp");

	sub_start("glp");
	printf("%d\n",parser(buff, ERR_PARSE_ARGS));
}

void main()
{
	test1();
}
