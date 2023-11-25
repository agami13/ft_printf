/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:33:11 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/25 01:43:31 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	small_hex(unsigned long n)
{
}

static void	big_hex(unsigned long n)
{
}

static void	print_address(unsigned long n)
{
}

void	ft_printhex(unsigned long n, char c)
{
	if (c == 'x')
		small_hex(n);
	else if (c == 'X')
		big_hex(n);
	else if (c == 'p')
		print_address(n);
}