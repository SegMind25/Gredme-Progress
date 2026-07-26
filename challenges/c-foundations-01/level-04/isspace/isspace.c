#include <unistd.h>

int	isspace(int c)
{

	if(c >= 0 && c <= 32)
	{
		return 1;
	}
	else 
	{
		return 0;
	}

	return (0);
}

