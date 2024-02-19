#include "ft.h"

int		main(int ac, char *av[])
{
	int ret;

	ret = check_dash(av[1], av[2], ac);
	if (ret == 1)
	{
		ft_check_read(av, ac);
	}
	else if (ret != -42)
	{
		while (1)
			continue ;
	}
	return (0);
}
