#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);
int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	a = 99;
	b = 8;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d\n%d\n", *div, *mod);
}