int	cmp_mixed(int a, unsigned int b)
{
	unsigned int	ua;

	if (a < 0)
	{
		return (-1);
	}
	ua = (unsigned int)a;
	if (ua < b)
	{
		return (-1);
	}
	if (ua > b)
	{
		return (1);
	}
	return (0);
}