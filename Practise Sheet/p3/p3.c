/*
JTSK-320111
p3.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void print_matrix(int **arr, int rows, int cols)
{
    int x,y;
    for(x=0;x<rows;x++)
    {
        for(y=0;y<cols;y++)
        {
            printf("%d ",arr[x][y]);
        }
        printf("\n");
    }
}

int main()
{
    FILE *f;
    f=fopen("matrix.dat","r+");
    if(f==NULL)
    {
        printf("Error!\n");
        return 0;
    }
    char line[256];
    int **mat,n,m,i,j,a,b,c;
    fgets(line,sizeof(int),f);
    sscanf(line,"%d",&n);
    fgets(line,sizeof(int),f);
    sscanf(line,"%d",&m);
    mat=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
    {
        mat[i]=(int*)malloc(sizeof(int)*m);
        for(j=0;j<m;j++)
        {
            mat[i][j]=0;
        }
    }

    while(fgets(line,sizeof(line),f))
    {
        sscanf(line,"%d %d %d",&a,&b,&c);
        mat[a-1][b-1]=c;
    }
    print_matrix(mat,n,m);
    fclose(f);
    for(i=0;i<n;i++)
    {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
