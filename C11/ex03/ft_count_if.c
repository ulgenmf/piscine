int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int c;

	c = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			c++;
		i++;
	}
	return (c);
}
