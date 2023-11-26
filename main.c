#include "ft_printf.h"

int	main(void)
{
	char test[] = "this is a test string.";
	char testo = 'a';
	int num = -123456789;

	ft_printf("ahem : [%s]\n\t[%c]\n\t[%d]\n\t[%%]", test, testo, num);
	printf("\n\n\n\n\n\n\ndahem : [%s]\n\t[%c]\n\t[%d]\n\t[%%]\n", test, testo,
			num);
	int c = 12345;
	int d = -678910;
	int rs = ft_printf("testo %d testo2 %u", c, d);
	int rs1 = printf("testo %d testo2 %u", c, d);
	printf("\n\n\n dyali : [%d]\ndyalhom : [%d]", rs, rs1);
	int te = 12;
	int *tet = &te;
	printf(   "\ndyalhom-> [%p]\n", tet);
	ft_printf("dyali --> [%p]\n\n\n", tet);

	int testi = 1234;
	int rso = ft_printf("\n\nfour %d", testi);
	ft_printf("\n%d", rso);
}