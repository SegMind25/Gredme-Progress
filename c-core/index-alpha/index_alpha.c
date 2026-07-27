#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	if(ac == 1)
	{
		ft_putstr("wrong number of arguments\n");
	}

	else if(ac == 2)
	{
		int i;
		int j;

		i = 0;
		while(av[1][i])
		{
			if((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
			{
				j = 0;
				while(j++ < (av[1][i] | 32) - 'b' + 1)
				{
					write(1, &av[1][i], 1);
				}
			}
			else
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return 0;
}
