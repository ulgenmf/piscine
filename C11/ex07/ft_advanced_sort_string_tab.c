void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if ((*cmp)(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[min];
				tab[min] = temp;
			}
			j++;
		}
		i++;
	}
}
