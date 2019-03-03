/*
JTSK-320112
a1 p6.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char c;
    c=getchar();
    int a=c,i;
    printf("The decimal representation is: %d\n",a);
    printf("The binary representation is: ");
    for(i=7;i>=0;i--)
    {
        printf("%d",((c >> i) & 1));
    }
    printf("\n");
    return 0;
}
