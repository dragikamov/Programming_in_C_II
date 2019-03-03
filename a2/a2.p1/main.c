/*
JTSK-320112
a2 p1.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    float arr[n];
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        getchar();
    }
    float *ptr=&arr[0];
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)<0)
        {
            printf("Before the first negative value: %d elements\n",i);
            break;
        }
    }
    return 0;
}
