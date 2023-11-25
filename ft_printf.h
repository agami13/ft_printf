/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 01:45:05 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/25 02:53:09 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// prototypes begin
void	ft_putstr(char *str);
void	ft_putchar(int c);
void	ft_putnbr(int n);
void	ft_printhex(unsigned long long n, const char c);
void	ft_putunbr(unsigned int n);
void	ft_print_ptr(unsigned long long n);
int		ft_printf(const char *input, ...);

#endif
