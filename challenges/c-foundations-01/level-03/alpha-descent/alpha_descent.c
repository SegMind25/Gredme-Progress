#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char str[] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while(str[i])
	{
		if((i / 2) % 2 == 0)
		{
			str[i] -= 32;
			write(1, &str[i], 1);
		}
		else 
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
