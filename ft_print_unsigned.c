/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 01:45:13 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/25 23:43:54 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	long	nbr;
	char	str[10];
	int		i;

	i = 0;
	nbr = n;
	while (nbr > 10)
	{
		str[i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	str[i] = nbr + '0';
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	return (num_len(n));
}
