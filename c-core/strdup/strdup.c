#include <stdlib.h>

char *strdup(const char *src)
{

	int i;
	int len;
	char *dup;

	len = 0;
	while(src[len])
		len++;

	dup = (char *)malloc(sizeof(char) * (len + 1));
	if(!dup)
		return NULL;

	i = 0;
	while(src[i])
	{
		dup[i] = src[i];
		i++;		
	}

	dup[i] = '\0';

	return dup;
}
