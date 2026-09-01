#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static char	choose_char(char x, char y, char w, char h)
{
	int	edge_x;
	int	edge_y;

	edge_x = (x == 0 || x == w - 1);
	edge_y = (y == 0 || y == h - 1);
	if (edge_x && edge_y)
	{
		return ('+');
	}
	else if (edge_x)
	{
		return ('|');
	}
	else if (edge_y)
	{
		return ('-');
	}
	return (' ');
}

static void	draw_row(int y, int w, int h)
{
	int	x;

	if (w <= 0)
	{
		return ;
	}
	x = 0;
	while (x < w)
	{
		ft_putchar(choose_char(x, y, w, h));
		x++;
	}
	write(1, "\n", 1);
}

static void	draw_box(int h, int w)
{
	int	y;

	if (h <= 0 || w <= 0)
	{
		return ;
	}
	y = 0;
	while (y < h)
	{
		draw_row(y, w, h);
		y++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putstr("wrong number of arguments\n");
		return 0;
	}
	draw_box(ft_atoi(av[2]), ft_atoi(av[1]));
	return (0);
}