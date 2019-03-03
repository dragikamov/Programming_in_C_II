/*
JTSK-320112
a1 p2.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#define BIT(A) (A&1)

int main()
{
    unsigned char c;
    scanf("%c",&c);
    getchar();
    printf("The decimal representation is: %d\n",c);
    printf("The least significant bit is: %d\n",BIT(c));
    return 0;
}
