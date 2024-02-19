#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *ptr;
	int i;

	i = 0;
	if (!(ptr = (int *)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		ptr[i] = (*f)(tab[i]);
		i++;
	}
	return (ptr);
}
