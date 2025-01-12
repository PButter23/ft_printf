/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:04:11 by arde-jes          #+#    #+#             */
/*   Updated: 2025/01/11 15:12:15 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_intlen(int n)
{
	int		ct;
	long	sub;

	sub = n;
	ct = 0;
	if (sub < 0)
	{
		sub *= -1;
		ct++;
	}
	if (sub == 0)
		return (1);
	while (sub > 0)
	{
		sub /= 10;
		ct++;
	}
	return (ct);
}

static int	ft_free(char *s)
{
	int	value;

	value = 0;
	while (s[value])
		ft_putchar(s[value++]);
	free(s);
	return (value);
}

int	ft_itoa(int n)
{
	char	*s;
	long	sub;
	int		value;

	sub = n;
	value = ft_intlen(n);
	s = (char *)malloc((value + 1) * sizeof(char));
	if (!s)
		return (0);
	s[value] = '\0';
	if (sub < 0)
	{
		s[0] = '-';
		sub = sub * (-1);
	}
	if (sub == 0)
		s[0] = '0';
	while (sub > 0)
	{
		s[--value] = (sub % 10) + '0';
		sub /= 10;
	}
	value = ft_free(s);
	return (value);
}
