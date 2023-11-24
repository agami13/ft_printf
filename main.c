#include <stdarg.h>
#include <stdio.h>

int test(char *test, ...)
{
	va_list list;
	int		i;

	i = 0;
	va_start(list, test);
	while(test[i] != '\0')
		i++;
	va_end(list);
	return (i);
}

int main()
{
	char test[] = "o";
	char testo[] = "tw";
	char testi[] = "tre";
}