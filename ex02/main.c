#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);
int main(void)
{
	int y = 2;
	int z = 3;

	int *a = &y;
	int *b = &z;

	printf("%d\n%d\n", *a, *b);
	ft_swap(a, b);
	printf("%d\n%d\n", *a, *b);

}
