#include "includes/files.h"
#include "includes/ft.h"
#include "includes/dict.h"

void	ft_show_tab(struct dict *par)
{
	int i;

	i = 0;
	while (par[i].key != 0)
	{
		ft_putstr(par[i].key);
		write(1, "\n", 1);
		ft_putstr(par[i].value);
		write(1, "\n", 1);
		i++;
	}
}
