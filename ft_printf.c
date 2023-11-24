/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:29:46 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/24 13:18:34 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	format(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
				ft_putchar(str[i + 1]);
			else if (str[i + 1] == 's')
				ft_putstr(str);
		
		}
	}
}

int ft_printf(const char *input, ...)
{
	int	i;
	va_list list;

	i = 0;
	return (i);
}