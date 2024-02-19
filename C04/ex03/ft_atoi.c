int		ft_atoi(char *str)
{
	int sign;
	int i;
	int base;
	int num;

	num = 0;
	base = 1;
	sign = 0;
	while ((*str == '\t' || *str == '\v' || *str == '\f' || *str == '\n' || \
			*str == '\r' || *str == ' ') && *str)
		str++;
	while ((*str == '+' || *str == '-') && *str)
	{
		if (*str++ == '-')
			sign++;
	}
	i = -1;
	while (str[++i] >= '0' && str[i] <= '9' && str[i])
		num = (num * 10) + (str[i] - '0');
	return (num * ((sign % 2 == 1) ? -1 : 1));
}
