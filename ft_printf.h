/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 01:45:05 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/25 23:48:22 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// prototypes begin
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_printhex(unsigned long n, const char c);
int	ft_putunbr(unsigned int n);
int	ft_putptr(unsigned long n);
int	ft_printf(const char *input, ...);

#endif
