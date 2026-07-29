#include <stdlib.h>
#include <unistd.h>

int *int_range(int from, int to)
{
	int len;
	int *arr;
	int i;

	if (from <= to)
		len = to - from + 1;
	else
		len = from - to + 1;

	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);

	i = 0;
	if (from <= to)
	{
		while (from <= to)
		{
			arr[i] = from;
			from++;
			i++;
		}
	}
	else
	{
		while (from >= to)
		{
			arr[i] = from;
			from--;
			i++;
		}
	}
	return (arr);
}