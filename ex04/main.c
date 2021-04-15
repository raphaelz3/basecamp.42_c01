#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{

	int vala;
	int valb;
	int *a;
	int *b;

	vala = 9;
	valb = 10;
	a = &vala;
	b = &valb;

	printf("%d\n%d\n", vala, valb);

	ft_ultimate_div_mod(a, b);

	printf("%d\n%d\n", vala, valb);
}
