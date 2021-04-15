#include <stdio.h>
#include <stdlib.h>

void    ft_rev_int_tab(int *tab, int size);

int        main(void)
{
    int i, j;
    int tab[] = {1, 2, 3, 4 , 5, 6, 7, 8, 9};

    i = 0;
    while (i < 9)
    {
        printf ("%d ", tab[i]);
        i++;
    }

    printf("\n");

    ft_rev_int_tab(tab, 9);

    j = 0;
    while (j < 9)
    {
        printf ("%d ", tab[j]);
        j++;
    }
}
