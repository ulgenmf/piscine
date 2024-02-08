/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulgen <fulgen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:38:48 by fulgen            #+#    #+#             */
/*   Updated: 2024/02/08 23:15:01 by fulgen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	
	i = 1;
	while (i < size)
		if (tab[i] < tab[i - 1])
		{
			ft_swap(&tab[i], &tab[i - 1]);
			i--;
		}
		else
		{
			i++;
		}
}