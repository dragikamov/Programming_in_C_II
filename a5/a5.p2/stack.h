/*
JTSK-320112
a5 p2.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    unsigned int count;
    int array[12];
    int binNum;
};
struct stack push(struct stack a,int n);
struct stack pop(struct stack a);
struct stack empty(struct stack a);
struct stack isEmpty(struct stack a);
struct stack put(struct stack a,unsigned int n);
void print(struct stack a);
