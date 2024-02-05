/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulgen <fulgen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:38:33 by fulgen            #+#    #+#             */
/*   Updated: 2024/02/05 04:06:14 by fulgen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_charf(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_charf(a / 10 + '0');
			ft_put_charf(a % 10 + '0');
			ft_put_charf(' ');
			ft_put_charf(b / 10 + '0');
			ft_put_charf(b / 10 + '0');
			if (b != 99 || a != 98)
			{
				ft_put_charf(',');
				ft_put_charf(' ');
			}
			b++;
		}
		a++;
	}
}
