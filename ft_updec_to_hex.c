/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_updec_to_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:29:51 by arde-jes          #+#    #+#             */
/*   Updated: 2025/01/11 15:28:31 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_updec_to_hex(unsigned int n)
{
	char	*hex_digits;
	int		len;

	len = 0;
	hex_digits = "0123456789ABCDEF";
	if (n == 0)
		return (ft_putchar('0'));
	if (n >= 16)
		len += ft_updec_to_hex(n / 16);
	len += ft_putchar(hex_digits[n % 16]);
	return (len);
}
