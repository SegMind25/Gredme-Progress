int	digit_count(int n)
{
	unsigned int	u;
	int				count;

	if (n == 0)
		return (1);
	u = (n < 0) ? -(unsigned int)n : (unsigned int)n;
	count = 0;
	while (u > 0)
	{
		count++;
		u /= 10;
	}
	return (count);
}