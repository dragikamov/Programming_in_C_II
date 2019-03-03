/*
JTSK-320111
p4.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list{
    char str[20];
    struct list* next;
};

struct list* insertBegin(struct list* arr, char str[])
{
    struct list* neww;
    neww=malloc(sizeof(struct list));
    strcpy(neww->str,str);
    if(arr==NULL)
    {
        neww->next=NULL;
    }
    neww->next=arr;
    return neww;
};

void print_list(struct list* arr)
{
    while(arr->next!=NULL)
    {
        printf("%s ",arr->str);
        arr=arr->next;
    }
    printf("%s\n",arr->str);
}
int main()
{
    char str[20];
    struct list* arr;
    arr=malloc(sizeof(struct list));
    arr=NULL;
    while(1)
    {
//        print("ee");
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1]='\0';
//        printf("%s",str);
        if(strcmp(str,"ZZZ")==0)
        {
            break;
        }
        arr=insertBegin(arr,str);
        print_list(arr);
    }
    return 0;
}
