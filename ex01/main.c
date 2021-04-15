#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);
int main(void)
{
	int z;
	int *i;
	int **a;
	int ***b;
	int ****c;
	int *****d;
	int ******e;
	int *******f;
	int ********g;
	int *********n;
	
z = 4;
i = &z;
a = &i;
b = &a;
c = &b;
d = &c;
e = &d;
f = &e;
g = &f;
n = &g;

printf("%d\n", z);
ft_ultimate_ft(n);
printf("%d\n", z);


}
