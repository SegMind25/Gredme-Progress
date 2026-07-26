#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_putstr("Hello World!\n");
	return (0);
}
