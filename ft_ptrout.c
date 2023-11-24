#include "printout.h"

void  printf_address(void *ptr)
{
  ft_putstr(ptr);
}

int main()
{
  int tt = 10;
  int *ptr = &tt;
  printf_address(ptr);
}
