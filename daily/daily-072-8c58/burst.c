int	longest_run(const char *line)
{
	int	i;
	int	run;
	int	max;

	i = 0;
	run = 1;
	max = 0;
	while (line[i])
	{
		if (line[i] == line[i + 1])
			run++;
		else
		{
			if (run > max)
				max = run;
			run = 1;
		}
		i++;
	}
	return (max);
}