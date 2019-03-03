/*
JTSK-320112
a3 p4.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int info;
    struct list *next;
};

struct list* push_front(struct list *my_list,int value);
struct list* push_back(struct list *my_list,int value);
void dispose_list(struct list *my_list);
void print_list(struct list *my_list);
struct list *pop(struct list* my_list);
