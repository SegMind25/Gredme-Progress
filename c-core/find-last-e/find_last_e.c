#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int i;
		i = 0;
		while(av[1][i])
		{
			if(av[1][i] == 'e')
			{
				write(1, "e\n", 2);
				return 0;
			}
			i++;
		}
		if(av[1][i] != 'e' || av[1][i] == 'E')
		{
			write(1, "\n", 1);
		}
	}
	else if(ac != 2)
	{
		write(1, "e\n", 2);
	}
}
