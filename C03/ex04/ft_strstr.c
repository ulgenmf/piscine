char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*temp;

	temp = str;
	if (*to_find == '\0')
		return (str);
	while (*temp)
	{
		i = 0;
		if (*temp == to_find[0])
		{
			while (temp[i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (temp);
		}
		temp++;
	}
	return (0);
}
