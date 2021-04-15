
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);
int main(void)
{

char *str;
//char vetor[7] = {"palavra"};
int count;


str = "palavra";

ft_strlen(str);
count = ft_strlen(str);
printf("%d", count);
return(0);
}

/*
//inicio

while(*str != '\0' )
{
str++;
count++;
}
printf("%d", count);
 //*/
//}

