/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:33:11 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/25 02:47:04 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static unsigned int	len(unsigned long long n)
// {
// 	unsigned long long	len;

// 	len = 0;
// 	while (n > 0)
// 	{
// 		n /= 16;
// 		len++;
// 	}
// 	return (len);
// }

void	ft_printhex(unsigned long long n, char c)
{
	if (n == 0)
		ft_putchar('0');
	if (n >= 16)
	{
		ft_printhex(n / 16, c);
		ft_printhex(n % 16, c);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
		{
			if (c == 'x')
				ft_putchar((n - 10 + 'a'));
			if (c == 'X')
				ft_putchar((n - 10 + 'A'));
		}
	}
}

void	ft_print_ptr(unsigned long long num)
{
	if (num == 0)
	{
		ft_putstr("0x0");
		return ;
	}
	ft_putstr("0x");
	ft_printhex(num, 'x');
}
