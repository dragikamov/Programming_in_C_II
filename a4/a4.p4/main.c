/*
JTSK-320112
a4 p4.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
};

int sortName(struct person x, struct person y)
{
    int sor=strcmp(x.name,y.name);
    if(sor==0)
    {
        return x.age-y.age;
    }
    else
    {
        return sor;
    }
}

int sortAge(struct person x, struct person y)
{
    if(x.age==y.age)
    {
        return strcmp(x.name,y.name);
    }
    else
    {
        return x.age-y.age;
    }
}

void bubbleSort(struct person *list, int n,int (*sor)(struct person,struct person))
{
    int swapped=1,i;
    while(swapped==1)
    {
        swapped=0;
        for(i=1; i<n; i++)
        {
            if(sor(list[i-1],list[i])>0)
            {
                struct person temp=list[i-1];
                list[i-1]=list[i];
                list[i]=temp;
                swapped=1;
            }
        }
    }
}

void print(struct person *list,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("{%s, %d}; ",list[i].name,list[i].age);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    struct person list[n];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%s %d",list[i].name,&list[i].age);
    }
    bubbleSort(list,n,sortName);
    print(list,n);

    bubbleSort(list,n,sortAge);
    print(list,n);
    return 0;
}
