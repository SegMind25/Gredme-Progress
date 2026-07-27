#include <stddef.h>
#include <unistd.h>


void	*memset(void *s, int c, size_t n)
{

	unsigned char *str;

	str = s;

	while(n > 0)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}

	return (s);
}
