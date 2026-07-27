int	beam_dose(int high_power, int spreader_in)
{
	if ((high_power == spreader_in) || (high_power == 0 && spreader_in == 1))
		return (200);
	else
	{
		return (0);
	}
}
