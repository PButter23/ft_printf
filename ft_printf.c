/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:35:28 by arde-jes          #+#    #+#             */
/*   Updated: 2024/12/13 17:55:35 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	va_arg;
	int		ct;
	int		ctotal;

	ct = 0;
	ctotal = 0;
	va_start (va_arg, format);
	while (format[ct] != '\0')
	{
		if (format[ct] == '%')
		{
			ctotal += ft_formatdef(format[++ct], va_arg);
		}
		else if (format[ct] != '%')
		{
			ft_putchar(format[ct]);
			ctotal++;
		}
		ct++;
	}
	va_end(va_arg);
	return (ctotal);
}
