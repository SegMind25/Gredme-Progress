int	safe_copy(char *dst, int cap, const char *src)
{
	int	i;

	i = 0;
	while (src[i] && i < cap - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
