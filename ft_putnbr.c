#include "ft_printf.h"

void  ft_putnbr(int n)
{
  long  nbr;
  char  str[10];
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
      str[i] = (nbr % 10) + '0';
      nbr /= 10;
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

