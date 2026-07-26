#include <unistd.h>

int	main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while(str[i] >= 'a' && str[i] <= 'z')
	{
		if(i % 2 != 0)
		{
			str[i] -= 32;
			write(1, &str[i], 1);
			write(1, &str[i], 1);
		}
		else if(i % 2 == 0)
		{
			write(1, &str[i], 1);
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
