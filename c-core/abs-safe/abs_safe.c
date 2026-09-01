// Return the absolute value of n as a long.
// Widen to long before negating, never after.
long	abs_safe(int n)
{

	if(n == -2147483648)
	{
		return 2147483648;
	}
	else if(n == 2147483647)
	{
		return 2147483647;
	}
	else if(n < 0)
	{
		n = -n;
	}
	else if(n >= 10)
	{
		abs_safe(n / 10);
		abs_safe(n % 10);
	}
	return (n);
}
