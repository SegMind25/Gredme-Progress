int	elapsed(int start, int end, int wrap)
{
	if (end >= start)
	{
		return (end - start);
	}
	return (end + wrap - start);
}