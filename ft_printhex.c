/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:33:11 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/24 21:21:56 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ft_printhex(int n)
{
  long  nbr;
  char  str[17];
  int   i;

  i = 0;
  nbr = n;
  if(nbr < 0)
  {
    ft_putchar('-');
    nbr *= -1;
  }
  if(nbr > 10)
  {
    while(nbr > 10)
    {
      str[i] = (nbr % 16) + '0';
      nbr /= 16;
      i++;
    }
  }
  str[i] = nbr + '0';
  while(i >= 0)
  {
    ft_putchar(str[i]);
    i--;
  }
}
