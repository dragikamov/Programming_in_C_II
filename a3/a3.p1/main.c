/*
JTSK-320112
a3 p1.c
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

struct list* push_front ( struct list * my_list, int value )
{
    struct list *newel;
    newel=(struct list *)malloc(sizeof(struct list));
    if(newel==NULL)
    {
        printf("Error allocating memory \n");
        return my_list;
    }
    newel->info=value;
    newel->next=my_list;
    return newel;
}
struct list* push_back ( struct list * my_list, int value )
{
    struct list * cursor, * newel ;
    cursor = my_list ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL )
    {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel->info=value;
    newel->next=NULL;


    if ( my_list == NULL )
        return newel ;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newel ;
    return my_list ;
}
void dispose_list(struct list * my_list )
{
    struct list * nextelem ;
    while ( my_list != NULL )
    {
        nextelem = my_list->next ;
        free ( my_list ) ;
        my_list = nextelem ;
    }
}
void print_list ( struct list * my_list )
{
    struct list * p ;
    for ( p = my_list ; p ; p=p->next )
    {
        printf ("%d ", p->info ) ;
    }
    printf("\n");
}

struct list *pop(struct list* my_list)
{
    if(my_list!=NULL)
    {
        struct list *po=my_list->next;
        free(my_list);
        return po;
    }
    return my_list;
}

int main ()
{
    struct list *my_list;
    my_list=NULL;
    while(1)
    {
        char c;
        int n;
        c=getchar();
        getchar();
        switch(c)
        {
        case 'a':
            scanf("%d",&n);
            getchar();
            my_list=push_back(my_list,n);
            break;
        case 'b':
            scanf("%d",&n);
            getchar();
            my_list=push_front(my_list,n);
            break;
        case 'p':
            print_list(my_list);
            break;
        case 'q':
            dispose_list(my_list);
            return 0;
        case 'r':
            my_list=pop(my_list);
            break;
        }
    }
    return 0;
}
