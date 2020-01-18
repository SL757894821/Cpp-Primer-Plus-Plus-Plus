int fact(int i)
{
	if (i < 0)
		return -1;
	int sum = 0;
	sum = i > 1 ? i * fact(i - 1) : 1;

	return sum;
}
