#include "../includes/dict.h"
#include "../includes/ft.h"
#include "../includes/files.h"

char	**create_list(void)
{
	int		i;
	int		j;
	char	**key_list;

	i = 0;
	j = 0;
	key_list = (char **)malloc(sizeof(char *) * 42);
	while (i < 41)
	{
		key_list[i] = create_number(i);
		i++;
	}
	key_list[i] = (void *)0;
	return (key_list);
}
