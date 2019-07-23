#include <stdio.h>
#include "my_pub.c"
#include "my_sub.c"

void test1()
{
	pub_start("{\r\n  \"baudrate\": {\r\n    \"value\": 12345\r\n  }\r\n}","glp/0/17q3jbh/rq/dev/iox/sys/if/modbus/0");
}

void test2()
{
	pub_start("{\r\n  \"baudrate\": {\r\n    \"value\": 19200\r\n  },\r\n  \"stopbits\": {\r\n    \"value\": 12345\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/sys/if/modbus/0");
}

void test3()
{
	pub_start("{\r\n  \"baudrate\": {\r\n    \"value\": 19200\r\n  },\r\n  \"stopbits\": {\r\n    \"value\": 2\r\n  },\r\n  \"parity\": {\r\n    \"value\": 1234\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/sys/if/modbus/0");
}

void test4()
{
	pub_start("{\r\n  \"baudrate\": {\r\n    \"value\": 19200\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/sys/if/modbus/0");
}

void test5()
{
	pub_start("{\r\n  \"baudrate\": {\r\n    \"value\": 19200\r\n  },\r\n  \"stopbits\": {\r\n    \"value\": 2\r\n  },\r\n  \"parity\": {\r\n    \"value\": 0\r\n  }\r\n}", "glp/0/17q3jbh/rq/dev/iox/sys/if/modbus/0");
	pub_start("{\r\n  \"action\": \"reset\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/sys/do");
}

void test6()
{
	pub_start("{\r\n  \"baudrate\": {\r\n    \"value\": 9600\r\n  }\r\n}\r\n", "glp/0/17q3jbh/rq/dev/iox.409eb1/sys/if/modbus/0");
	pub_start("{\r\n  \"action\": \"reset\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/sys/do");
}

void test7()
{
	pub_start("1", "glp/0/17q3jbh/rq/dev/iox/sys/if/modbus/0/stopbits/value");
	pub_start("{\r\n  \"action\": \"reset\"\r\n}", "glp/0/17q3jbh/rq/dev/iox.409eb1/sys/do");
}

void test8()
{
	pub_start("{\r\n  \"baudrate\": {\r\n    \"value\": 115200\r\n  },\r\n  \"stopbits\": {\r\n    \"value\": 1\r\n  },\r\n  \"parity\": {\r\n    \"value\": 2\r\n  }\r\n}\r\n", "glp/0/17q3jbh/rq/dev/iox/sys/if/modbus/0");
	pub_start("{\r\n  \"action\": \"reset\"\r\n}", "glp/0/17q3jbh/rq/dev/iox/sys/do");	
}

void main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
}

