/*
JTSK-320112
a1 p4.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    getchar();
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        getchar();
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
        getchar();
    }
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",x[i]*y[i]);
    }
    #endif // INTERMEDIATE
    for(i=0;i<n;i++)
    {
        s+=x[i]*y[i];
    }
    printf("The scalar product is: %d\n",s);
    return 0;
}
