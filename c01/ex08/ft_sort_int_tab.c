void	ft_swap(int *arr, int idx, int min)
{
	int temp;

	temp = arr[idx];
	arr[idx] = arr[min];
	arr[min] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int				i;
	int				j;
	unsigned		min;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min = i;
		while (j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		if (tab[min] < tab[i])
			ft_swap(tab, i, min);
		i++;
	}
}
