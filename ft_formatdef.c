/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatdef.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:48:12 by arde-jes          #+#    #+#             */
/*   Updated: 2024/12/13 17:55:43 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatdef(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		return (len += ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (len += ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (len += ft_pointer_to_hex(va_arg(args, unsigned long *)));
	else if (format == 'd' || format == 'i')
		return (len += ft_itoa(va_arg(args, int)));
	else if (format == 'u')
		return (len += ft_itoa_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (len += ft_downdec_to_hex(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (len += ft_updec_to_hex(va_arg(args, unsigned int)));
	else if (format == '%')
	{
		len++;
		return (ft_putchar('%'));
	}
	return (0);
}
