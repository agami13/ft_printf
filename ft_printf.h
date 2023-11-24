#ifndef PRINTOUT_H
# define PRINTOUT_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// prototypes begin
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_printhex(int n);
#endif // !PRINTOUT_H
