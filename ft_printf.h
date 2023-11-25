/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 01:45:05 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/25 02:43:26 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

// prototypes begin
void	ft_putstr(char *str);
void	ft_putchar(int c);
void	ft_putnbr(int n);
void	ft_printhex(unsigned long long n, const char c);
void	ft_putunbr(unsigned int n);
void	ft_printptr(unsigned long long n);

#endif
