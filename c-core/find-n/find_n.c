#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int minecraft, char **grox)
{

	if(minecraft == 1 || minecraft > 2)
	{
		ft_putstr("wrong number of arguments\n");
	}

	else if(minecraft == 2)
	{
		int chill = 0;
		int ayo = 1;
		while(grox[ayo][chill])
		{
			if(grox[ayo][chill] == 'n')
			{
				write(1, "n\n", 2);
				return 0;
			}
			chill++;
		}
		if(grox[ayo][chill] != 'n')
		{
			write(1, "\n", 1);
			return 0;
		}
	}
	return (0);
}
