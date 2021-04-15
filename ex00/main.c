#include <unistd.h>
#include <stdio.h>

void    ft_ft(int *nbr);
int main(void)
{

int *nbr;
int a;

a = 2;
nbr = &a;
printf("%d\n", *nbr);
ft_ft(nbr);
printf("%d\n", *nbr);

}