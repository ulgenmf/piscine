/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulgen <fulgen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:13:34 by fulgen            #+#    #+#             */
/*   Updated: 2024/02/08 14:30:32 by fulgen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		i++;
		return (i);
	}
}

int	stringLength(const char *str)
{
	const char	*ptr = str;

	while (*ptr != '\0')
	{
		++ptr;
	}
	return (ptr - str);
}
