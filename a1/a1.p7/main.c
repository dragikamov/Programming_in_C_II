/*
JTSK-320112
a1 p7.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void set3bits(char c, int a, int b, int d)
{
    int i;
    for(i=7;i>=0;i--)
    {
        if(i==a || i==b || i==d)
        {
            printf("1");
        }
        else
        {
            printf("%d",((c >> i) & 1));
        }
    }
}

int main()
{
    unsigned char c;
    c=getchar();
    int e,b,d;
    scanf("%d %d %d",&e,&b,&d);
    int a=c,i;
    printf("The decimal representation is: %d\n",a);
    printf("The binary representation is: ");
    for(i=7;i>=0;i--)
    {
        printf("%d",((c >> i) & 1));
    }
    printf("\nAfter setting the bits: ");
    set3bits(c,e,b,d);
    printf("\n");
    return 0;
}
