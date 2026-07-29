unsigned int gcd(unsigned int a, unsigned int b)
{
	unsigned int t;

	while(b)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	return (a / gcd(a, b) * b);
}
