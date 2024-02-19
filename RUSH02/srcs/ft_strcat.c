#include "../includes/dict.h"
#include "../includes/ft.h"
#include "../includes/files.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int dest_end;

	i = 0;
	dest_end = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_end + i] = src[i];
		i++;
	}
	dest[dest_end + i] = '\0';
	return (dest);
}
