/*
JTSK-320112
a4 p3.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  return (*(int*)a-*(int*)b);
}

void ascending(int *arr,int n)
{
    qsort(arr,n,sizeof(int),compare);
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void descending(int *arr,int n)
{
    qsort(arr,n,sizeof(int),compare);
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void quit(int *arr,int n)
{
    exit(0);
}

void (*func[3])(int*,int)={ascending,descending,quit};

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        getchar();
    }
    char c;
    while(1)
    {
        c=getchar();
        getchar();
        if(c=='a')
        {
            func[0](arr,n);
        }
        else if(c=='d')
        {
            func[1](arr,n);
        }
        else if(c=='e')
        {
            func[2](arr,n);
        }
        else
        {
            getchar();
            printf("Invalid input!\n");
        }
    }
    return 0;
}
