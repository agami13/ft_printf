/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 01:47:51 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/25 01:48:34 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format(const char input, va_list list)
{
	if (input == 'c')
		ft_putchar(va_arg(list, int));
	else if (input == 's')
		ft_putstr(va_arg(list, char *));
	else if (input == 'i' || input == 'd')
		ft_putnbr(va_arg(list, int));
	else if (input == 'u')
		ft_putunbr(va_arg(list, unsigned int));
	else if (input == 'p' || input == 'x' || input == 'X')
		ft_printhex(va_arg(list, unsigned long), input);
	else if (input == '%')
		ft_putchar('%');
	return (0);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		len;
	va_list	list;

	i = 0;
	len = 0;
	va_start(list, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			len += format(input[i + 1], list);
			i++;
		}
		else
			len += write(1, &input[i], 1);
		i++;
	}
	va_end(list);
	return (len);
}

// int	main(void)
// {
// 	char test[] = "this is a test string.";
// 	char testo = 'a';
// 	int num = -123456789;

// 	ft_printf("ahem : [%s]\n\t[%c]\n\t[%d]\n\t[%%]", test, testo, num);
// 	printf("\n\n\n\n\n\n\nahem : [%s]\n\t[%c]\n\t[%d]\n\t[%%]\n", test, testo,
// num);
// 	// int c = 12345;
// 	// int d = -678910;
// 	// int rs = ft_printf("testo %d testo2 %u", c, d);
// 	// int rs1 = printf("testo %d testo2 %u", c, d);
// 	// printf("\n\n\n dyali : [%d]\ndyalhom : [%d]", rs, rs1);
// }