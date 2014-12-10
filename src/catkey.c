#include <catkey.h>

unsigned long catkey_str_hash(const char *str)
{
	//djb2 algo
	unsigned long hash = 5381;
	char c;
	while (c = *(str++))
		hash = (hash << 5) + hash + (unsigned long)c;

	return hash;
}
