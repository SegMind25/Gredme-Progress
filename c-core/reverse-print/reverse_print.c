#include <unistd.h>

void ft_pustr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
	
}

int strlen(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	return len;
}


int	main(int ac, char **av)
{

	if(ac == 1 || ac > 2)
	{
		ft_pustr("wrong number of arguments");
	}

	if(ac == 2)
	{
		int i = 0;
		while(av[1][i])
		{
			i++;
		}

		while(i > 0)
		{
			i--;
			write(1, &av[1][i], 1);
		}

	}

	write(1, "\n", 1);
	return (0);
}
