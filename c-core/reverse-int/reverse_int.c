#include <stddef.h>

// Flip the order of the first n elements of a, in place.
// Nothing past that prefix moves, and n == 0 changes nothing.
void	reverse_int(int *a, size_t n)
{
	int start = 0;
	int end = n - 1;
	while(start < end)
	{
		int temp;
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
