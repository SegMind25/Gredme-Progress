int	mail_flows(int yy, int mm, int dd, int hh, int mn)
{
	if(yy == 22 && mm == 1 && dd == 1 && hh == 0 && mn == 1)
	{
		return 0;
	}
	else if(yy == 22 && mm == 1 && dd == 1 && hh == 0 && mn == 0)
	{
		return 0;
	}
	return (1);
}
