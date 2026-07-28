#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		ft_putstr("wrong number of arguments\n");
		return (0);
	}

	if ((av[2][0] == '\0' || av[2][1] != '\0') || (av[3][0] == '\0' || av[3][1] != '\0'))
	{
		write(1, "\n", 1);
		return (0);
	}

	int i = 0;
	int last = -1;

	while (av[1][i])
	{
		if (av[1][i] == av[2][0])
		{
			last = i;
		}
		i++;
	}

	i = 0;
	while (av[1][i])
	{
		if (i == last)
		{
			write(1, av[3], 1);
		}
		else
		{
			write(1, &av[1][i], 1);
		}
		i++;
	}

	write(1, "\n", 1);
	return (0);
}