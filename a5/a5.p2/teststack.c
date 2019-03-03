/*
JTSK-320112
a5 p2.c
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
    scanf("%d",&n);
    getchar();
    obj=put(obj,n);
    print(obj);
    return 0;
}
