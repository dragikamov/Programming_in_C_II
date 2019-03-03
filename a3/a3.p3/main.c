/*
JTSK-320112
a3 p3.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    char info;
    struct list *next;
    struct list *prev;
};

struct list* push_front(struct list *my_list, int value)
{
    struct list *newel;
    newel=(struct list *)malloc(sizeof(struct list));
    if(newel==NULL)
    {
        printf("Error allocating memory \n");
        return my_list;
    }
    if(my_list==NULL)
    {
        newel->next=NULL;
        newel->prev=NULL;
        newel->info=value;
        my_list=newel;
        return my_list;
    }
    else
    {
        newel->info=value;
        newel->next=my_list;
        my_list->prev=newel;
        newel->prev=NULL;
        return newel;

    }
}

struct list* reverse(struct list* my_list)
{
    struct list *prev=NULL;
    struct list *current;
    struct list *next;
    current=my_list;
    while (current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}

struct list* deleteAll(struct list *my_list, char c)
{
    struct list *current,*next,*prev,*begin;
    current=my_list;
    begin=my_list;
    int check=0;
    while(current!=NULL)
    {
        if(current->info==c)
        {
            next=current->next;
            prev=current->prev;
            if(current->next!=NULL)
            {
                next->prev=prev;
            }
            if(current->prev!=NULL)
            {
                prev->next=next;
            }
            if(current->prev==NULL)
            {
                free(current);
                begin=next;
                current=next;
                current->prev=NULL;
                check=1;
                continue;
            }
            free(current);
            current=next;
            check=1;
        }
        else
        {
            current=current->next;
        }
    }
    if(check==0)
    {
        printf("The element is not in the list!\n");
    }
    return begin;
};

//struct list* push_back ( struct list * my_list, int value )
//{
//    struct list * cursor, * newel ;
//    cursor = my_list ;
//    newel = ( struct list *) malloc ( sizeof ( struct list ));
//    if ( newel == NULL )
//    {
//        printf (" Error allocating memory \n");
//        return my_list ;
//    }
//    newel->info=value;
//    newel->next=NULL;
//
//
//    if ( my_list == NULL )
//        return newel ;
//    while ( cursor -> next != NULL )
//        cursor = cursor -> next ;
//    cursor -> next = newel ;
//    return my_list;
//}
void dispose_list(struct list * my_list)
{
    struct list * nextelem;
    while(my_list!=NULL)
    {
        nextelem=my_list->next ;
        free(my_list);
        my_list=nextelem;
    }
}
void print_list(struct list *my_list)
{
    struct list *p;
    for(p=my_list; p; p=p->next)
    {
        printf("%c ", p->info) ;
    }
    printf("\n");
}

//struct list *pop(struct list* my_list)
//{
//    if(my_list!=NULL)
//    {
//        struct list *po=my_list->next;
//        free(my_list);
//        return po;
//    }
//    return my_list;
//}

int main ()
{
    struct list *my_list;
    my_list=NULL;
    while(1)
    {
        char a,n,c;
        c=getchar();
        getchar();
        switch(c)
        {
        case '1':
            n=getchar();
            getchar();
            my_list=push_front(my_list,n);
            break;
        case '3':
            print_list(my_list);
            break;
        case '5':
            dispose_list(my_list);
            return 0;
        case '2':
            a=getchar();
            getchar();
            my_list=deleteAll(my_list,a);
            break;
        case '4':
            my_list=reverse(my_list);
            print_list(my_list);
            my_list=reverse(my_list);
            break;
        }
    }
    return 0;
}
