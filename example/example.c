#include "example.h"

int main()
{
	char buf[256];
	printf("Hello, this is catkey example!!!!\n");
	fgets(buf, 256, stdin);
	printf("str :%s\n", buf);
	printf("hash: %ld\n", catkey_str_hash((const char*)buf));


	return 0;
}
