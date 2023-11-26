/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:33:11 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/26 14:06:04 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	len(unsigned long n)
{
	unsigned long long	len;

	len = 0;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_printhex(unsigned long n, char c)
{
	size_t	div;
	char	*base_16;

	if (n == 0)
		ft_putchar('0');
	if (c == 'x')
		base_16 = "0123456789abcdef";
	else if (c == 'X')
		base_16 = "0123456789ABCDEF";
	else
		return (0);
	div = 1;
	while (n / div >= 16)
		div *= 16;
	while (div)
	{
		ft_putchar(base_16[n / div]);
		n %= div;
		div /= 16;
	}
	return (len(n));
}


/*



0
1 < 0
539

F < 1337
FF < 1337
FFF < 1337

53 9


*/