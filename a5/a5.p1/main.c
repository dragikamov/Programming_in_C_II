/*
JTSK-320112
a5 p1.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    int n=0;
    struct stack obj;
    obj.count=0;
    while(1)
    {
        char c;
        c=getchar();
        getchar();
        switch(c)
        {
        case 's':
            scanf("%d",&n);
            getchar();
            obj=push(obj,n);
            break;
        case 'p':
            obj=pop(obj);
            break;
        case 'e':
            obj=empty(obj);
            break;
        case 'q':
            printf("Quit\n");
            return 0;
        }
    }
    return 0;
}
