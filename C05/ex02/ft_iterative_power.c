int		ft_iterative_power(int nb, int power)
{
	int res;
	int p;

	p = power;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 0)
		res = nb * res;
	return (res);
}
