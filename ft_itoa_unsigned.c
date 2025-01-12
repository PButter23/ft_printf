/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:11:59 by arde-jes          #+#    #+#             */
/*   Updated: 2025/01/11 15:29:40 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen(unsigned int n)
{
	int		ct;
	long	sub;

	sub = n;
	ct = 0;
	if (sub == 0)
		return (1);
	while (sub > 0)
	{
		sub /= 10;
		ct++;
	}
	return (ct);
}

int	ft_itoa_unsigned(unsigned int n)
{
	char				*s;
	unsigned int		sub;
	int					value;

	sub = n;
	value = ft_intlen(n);
	s = (char *)malloc((value + 1) * sizeof(char));
	if (!s)
		return (0);
	s[value] = '\0';
	if (sub == 0)
		s[0] = '0';
	while (sub > 0)
	{
		s[--value] = (sub % 10) + '0';
		sub /= 10;
	}
	value = 0;
	while (s[value])
		ft_putchar(s[value++]);
	free(s);
	return (value);
}
