#include "../includes/dict.h"
#include "../includes/ft.h"
#include "../includes/files.h"

void	translate_by_pos(int *i, int ln, char **dict, char *nbr)
{
	int pos;

	pos = ln - *i;
	if (pos % 3 == 0)
		write_hundred(nbr[*i], dict);
	else if (pos % 3 == 2)
	{
		if (write_dozen(nbr + *i, dict))
		{
			*i += 1;
			write_illion(nbr + *i - 2, dict, pos);
		}
	}
	else if (pos % 3 == 1)
	{
		write_last_number(nbr, dict, *i);
		if (pos > 3)
			write_illion(nbr + *i - 2, dict, pos);
	}
}

void	translate_nbr(char *nbr, char *dict[42])
{
	int i;
	int ln;

	i = 0;
	ln = ft_strlen(nbr + i);
	while (nbr[i] == '0')
		i++;
	while (i != ln)
	{
		translate_by_pos(&i, ln, dict, nbr);
		i++;
	}
}
