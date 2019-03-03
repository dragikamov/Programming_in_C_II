/*
JTSK-320112
a1 p3.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define MID(x, y) ((x)+(y))/2

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double x=a,y=b,z=c;
    double f=MID((MAX(MAX(x,y),z)),(MIN(MIN(x,y),z)));
    printf("The mid-range is: %.6lf\n",f);
    return 0;
}
