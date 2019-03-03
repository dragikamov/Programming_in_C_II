/*
JTSK-320112
a2 p3.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void multiplication(int **matA, int **matB, int n,int m,int p)
{
    int i,j,k;
    int **res;
    res=(int **)malloc(sizeof(int *)*n);
    if(!res)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    for(i=0; i<n; i++)
    {
        res[i]=(int *)malloc(sizeof(int)*p);
        if(!res)
        {
            printf("Memory allocation error!\n");
            exit(1);
        }
        for(j=0; j<p; j++)
        {
            int s=0;
            for(k=0; k<m; k++)
            {
                s+=matA[i][k]*matB[k][j];
            }
            res[i][j]=s;
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    free(res);
}

int main()
{
    int n,m,p,i,j;
    scanf("%d %d %d",&n,&m,&p);
    int **matA,**matB;
    matA=(int **)malloc(sizeof(int *)*n);
    if(!matA)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    matB=(int **)malloc(sizeof(int *)*m);
    if(!matB)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    for(i=0; i<n; i++)
    {
        matA[i]=(int *)malloc(sizeof(int)*m);
        if(!matA)
        {
            printf("Memory allocation error!\n");
            exit(1);
        }
        for(j=0; j<m; j++)
        {
            scanf("%d",&matA[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        matB[i]=(int *)malloc(sizeof(int)*p);
        if(!matB)
        {
            printf("Memory allocation error!\n");
            exit(1);
        }
        for(j=0; j<p; j++)
        {
            scanf("%d",&matB[i][j]);
        }
    }
    printf("Matrix A:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",matA[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication result AxB:\n");
    multiplication(matA,matB,n,m,p);

    free(matA);
    free(matB);
    return 0;
}
