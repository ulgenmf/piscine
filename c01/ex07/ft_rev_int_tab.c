void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int half;

	i = 0;
	temp = 0;
	half = size / 2;
	while (half-- > 0)
	{
		temp = tab[i];
		tab[i++] = tab[size - 1];
		tab[size-- - 1] = temp;
	}
}
