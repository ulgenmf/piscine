int	ft_check0(char *tab)
{
	int k;

	k = 0;
	while (k++ < 4)
	{
		if (tab[k] == 1)
			return (1);
	}
	return (0);
}

int	ft_check_null(char ***tab)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (ft_check0(tab[i][j]) != 0)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}
