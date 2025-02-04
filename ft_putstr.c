/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:02:51 by arde-jes          #+#    #+#             */
/*   Updated: 2024/12/17 17:02:53 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	ct;

	ct = 0;
	if (str == NULL)
		return (str = "(null)");
	while (str[ct] != '\0')
	{
		write (1, &str[ct], 1);
		ct++;
	}
	return (ct);
}
