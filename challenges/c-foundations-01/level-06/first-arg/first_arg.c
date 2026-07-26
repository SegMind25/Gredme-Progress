#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}

int main(int ac, char **av)
{

	if(ac == 1)
	{
		ft_putstr("wrong number of arguments");
	}

	else if(ac >= 2)
	{
		int i = 0;
		while(av[1][i])
		{
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
