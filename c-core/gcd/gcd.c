#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int ft_gcd(unsigned int a, unsigned int b)
{
	unsigned int temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

int main(int ac, char **av)
{
	unsigned int result;
	int i;

	if (ac < 3)
	{
		printf("wrong number of arguments\n");
		return (0);
	}

	result = (unsigned int)atoi(av[1]);
	i = 2;

	while (i < ac)
	{
		result = ft_gcd(result, (unsigned int)atoi(av[i]));
		i++;
	}
	printf("%u\n", result);
	return (0);
}