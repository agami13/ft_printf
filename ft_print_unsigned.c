/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 01:45:13 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/25 01:45:14 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n)
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
}
