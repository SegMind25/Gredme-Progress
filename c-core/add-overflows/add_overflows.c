#include <limits.h>

// Return 1 when a + b would fall outside the range of an int, 0 when it fits.
// Decide by comparing a against a bound. Computing a + b is never allowed.
int	add_overflows(int a, int b)
{
	if(b > 0 && a > INT_MAX - b)
	{
		return 1;
	}
	if(b < 0 && a < INT_MIN - b)
	{
		return 1;
	}

	 return 0;
}