/*
JTSK-320112
a1 p5.c
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
    printf("The backwards binary representation is: ");
    int bits;
    for(bits = 0; (1 << bits) <= c; bits++);
    for(i = 0; i < bits; i++)
    {
        printf("%d", ((c >> i) & 1));
    }
    printf("\n");
    return 0;
}
