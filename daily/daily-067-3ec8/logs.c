int	replayed(int *east, int en, int *west, int wn)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < en && j < wn)
	{
		if (east[i] == west[j])
		{
			j++;
		}
		i++;
	}
	return (j);
}