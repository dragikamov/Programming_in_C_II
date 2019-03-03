/*
JTSK-320112
a5 p2.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

struct stack push(struct stack a,int n)
{
    if(a.count<12)
    {
        a.array[a.count]=n;
        a.count+=1;
        printf("Pushing %d\n",n);
    }
    else
    {
        printf("Pushing Stack Overflow\n");
    }
    return a;
};

struct stack pop(struct stack a)
{
    if(a.count==0)
    {
        printf("Popping Stack Underflow\n");
    }
    else
    {
        printf("Popping %d\n",a.array[a.count-1]);
        a.count--;
    }
    return a;
}

struct stack empty(struct stack a)
{
    printf("Emptying Stack ");
    while(a.count>0)
    {
        printf("%d ",a.array[a.count-1]);
        a.count--;
    }
    printf("\n");
    return a;
}

struct stack isEmpty(struct stack a)
{
    if(a.count==0)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }
    return a;
}

struct stack put(struct stack a,unsigned int n)
{
    a.binNum=n;
    while(n>0)
    {
        if(n%2==1)
        {
            a.array[a.count]=1;
        }
        else
        {
            a.array[a.count]=0;
        }
        a.count++;
        n/=2;
    }
    return a;
}
void print(struct stack a)
{
    printf("The binary representation of %d is ",a.binNum);
    while(a.count>0)
    {
        printf("%d",a.array[a.count-1]);
        a.count--;
    }
    printf(".\n");
}
