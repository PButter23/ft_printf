/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:53:43 by arde-jes          #+#    #+#             */
/*   Updated: 2025/01/11 15:57:04 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_reverse_hex(char *hex_str, int len)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	while (len > 0)
	{
		ft_putchar(hex_str[--len]);
		count++;
	}
	return (count);
}

int	ft_pointer_to_hex(unsigned long *ptr)
{
	char			*hex_digits;
	char			hex_str[16];
	int				len;
	unsigned long	temp;

	hex_digits = "0123456789abcdef";
	len = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	temp = (unsigned long)ptr;
	if (temp == 0)
		hex_str[len++] = '0';
	while (temp > 0)
	{
		hex_str[len++] = hex_digits[temp % 16];
		temp /= 16;
	}
	return (ft_print_reverse_hex(hex_str, len));
}
