#include <unistd.h>

void	ft_putchar(char *c)
{
	int i;
	int num;

	i = 0;
	while (i < 4)
	{
		num = i + '1';
		if (c[i])
			write(1, &num, 1);
		i++;
	}
}

void	ft_putline(char **line)
{
	int i;

	i = 0;
	while (i < 4)
	{
		ft_putchar(line[i]);
		if (i < 3)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_puttab(char ***tab)
{
	int i;

	i = 0;
	while (i < 4)
	{
		ft_putline(tab[i]);
		i++;
	}
}
