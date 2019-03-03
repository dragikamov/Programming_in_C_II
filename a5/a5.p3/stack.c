#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

Stack push(Stack lst, char let)
{
    if(lst.n==30)
    {
        printf("Stack Overflow\n");
        return lst;
    }
    strcat(lst.names[lst.n].name,let);
    return lst;
}

int check(Stack lst)
{
    int i,j;
    for(i=0,j=lst.n-1;i<lst.n;i++,j--)
    {
        if(j<=i)
        {
            return 1;
        }
        else if(lst.names[i].name!=lst.names[j].name)
        {
            return 0;
        }
    }
}
