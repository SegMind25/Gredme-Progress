int	isalpha(int c)
{

	char str = (unsigned char)c;

	if(str >= 'a' && str <= 'z')
	{
		return 1;
	}
	else if(str >= 'A' && str <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}

	return (0);
}
