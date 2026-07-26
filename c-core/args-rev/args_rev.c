#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{

	if(ac >= 2)
	{
		int i = ac - 1;
		while(i > 0)
		{
			ft_putstr(av[i]);
			ft_putstr("\n");
			i--;
		}
	}

	return 0;
}
