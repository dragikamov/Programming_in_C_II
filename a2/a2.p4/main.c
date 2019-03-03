/*
JTSK-320112
a2 p4.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,i,j,k;
    scanf("%d %d %d",&x,&y,&z);
    int ***mat;
    mat=(int ***)malloc(sizeof(int **)*x);
    if(!mat)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    for(i=0; i<x; i++)
    {
        mat[i]=(int **)malloc(sizeof(int *)*y);
        for(j=0; j<y; j++)
        {
            mat[i][j]=(int *)malloc(sizeof(int)*z);
            if(!mat)
            {
                printf("Memory allocation error!\n");
                exit(1);
            }
            for(k=0; k<z; k++)
            {
                scanf("%d",&mat[i][j][k]);
            }
        }
    }
    for(k=0; k<z; k++)
    {
        printf("Section %d:\n",k+1);
        for(j=0; j<y; j++)
        {
            for(i=0; i<x; i++)
            {
                printf("%d ",mat[i][j][k]);
            }
            printf("\n");
        }
    }
    free(mat);
    return 0;
}
