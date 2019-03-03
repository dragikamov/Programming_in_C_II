/*
JTSK-320112
a5 p5.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[100];
    int age;
};

int sortVal (const void *a, const void *b)
{
   return (int)( *(double*)b - *(double*)a );
}

int sortName (const void * a, const void * b)
{

  const struct person *nameA = a;
  const struct person *nameB = b;

  return ( strcmp(nameA->name,nameB->name));
}

int sortAge (const void * a, const void * b)
{

  const struct person *ageA = a;
  const struct person *ageB = b;

  return ( ageA->age - ageB->age );
}

void print(struct person *list,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s:%d",list[i].name,list[i].age);
        if(i<n-1)
        {
            printf(" ");
        }
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    double *arr;
    arr=malloc(sizeof(double)*n);
    if(arr==NULL)
    {
        printf("Error allocating\n");
        exit(1);
    }
    struct person *list;
    list=malloc(sizeof(struct person)*n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
        getchar();
    }
    for(i=0;i<n;i++)
    {
        fgets(list[i].name,sizeof(list[i].name),stdin);
        list[i].name[strlen(list[i].name)-1]='\0';
        scanf("%d",&list[i].age);
        getchar();
    }
    qsort(arr,n,sizeof(double),sortVal);
    printf("Decreasingly sorted floats:\n");
    for(i=0;i<n;i++)
    {
        printf("%.3lf",arr[i]);
        if(i<n-1)
        {
            printf(" ");
        }
    }
    printf("\nAlphabetically sorted structs (name):\n");
    qsort(list,n,sizeof(struct person),sortName);
    print(list,n);

    printf("Increasingly sorted structs (age):\n");
    qsort(list,n,sizeof(struct person),sortAge);
    print(list,n);

    free(arr);
    free(list);
    return 0;
}
