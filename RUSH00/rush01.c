void	ft_putchar(char c);

void	rush(int x, int y)
{
	int c;
	int r;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || ((r == y && c == x) && r != 1 && c != 1))
				ft_putchar('/');
			else if ((r == 1 && c == x) || (r == y && c == 1))
				ft_putchar('\\');
			else if ((c > 1 && c < x && r == 1) || ((c > 1 && c < x) && r == y))
				ft_putchar('*');
			else if ((c == 1 && r > 1 && r < y) || ((c == x && r > 1) && r < y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
