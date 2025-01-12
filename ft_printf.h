/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:25:22 by arde-jes          #+#    #+#             */
/*   Updated: 2025/01/11 15:26:55 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_formatdef(const char format, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_itoa(int n);
int	ft_itoa_unsigned(unsigned int n);
int	ft_downdec_to_hex(unsigned int n);
int	ft_updec_to_hex(unsigned int n);
int	ft_pointer_to_hex(unsigned long *ptr);

#endif
