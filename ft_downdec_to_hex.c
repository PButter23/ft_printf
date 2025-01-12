/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_downdec_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:12:46 by arde-jes          #+#    #+#             */
/*   Updated: 2025/01/11 15:22:49 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_downdec_to_hex(unsigned int n)
{
	char	*hex_digits;
	int		len;

	len = 0;
	hex_digits = "0123456789abcdef";
	if (n == 0)
		return (ft_putchar('0'));
	if (n >= 16)
		len += ft_downdec_to_hex(n / 16);
	len += ft_putchar(hex_digits[n % 16]);
	return (len);
}
