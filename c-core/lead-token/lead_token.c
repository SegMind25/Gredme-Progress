#include <unistd.h>

void ft_pustr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{

	(void)av;
	if(ac == 1 || ac > 2)
	{
		ft_pustr("wrong number of arguments");
	}

	if(ac == 2)
	{
		int i = 0;
		while(av[1][i] == ' ' || av[1][i] == '\t')
		{
			i++;
		}
		while(av[1][i] && av[1][i] != ' ')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
