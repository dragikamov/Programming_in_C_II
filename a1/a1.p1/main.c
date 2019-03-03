/*
JTSK-320112
a1 p1.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#define MACRO(X,Y,Z){ Z tmp=X; X=Y; Y=tmp; }

int main()
{
    int x,y;
    double a,b;
    scanf("%d",&x);
    getchar();
    scanf("%d",&y);
    getchar();
    scanf("%lf",&a);
    getchar();
    scanf("%lf",&b);
    MACRO(x,y,int);
    MACRO(a,b,double);
    printf("After swapping:\n");
    printf("%d\n%d\n",x,y);
    printf("%.6lf\n%.6lf\n",a,b);
    return 0;
}
