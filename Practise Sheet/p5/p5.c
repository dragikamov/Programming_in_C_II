/*
JTSK-320111
p5.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct river
{
    char name[40];
    int length;
    int drainage_area;
};

int sortName(const void *x,const void *y)
{
    return strcmp(((struct river*)x)->name,((struct river*)y)->name);
}

int main()
{
    FILE *read;
    FILE *write;
    struct river col[30];
    int i=0;
    read=fopen("data.txt","r");
    if(read==NULL)
    {
        printf("Error opening\n");
        return 0;
    }
    char line[256];
    printf("Enter name of output file:\n");
    fgets(line,sizeof(line),stdin);
    line[strlen(line)-1]='\0';
    write=fopen(line,"w+");
    while(fgets(line,sizeof(line),read))
    {
        char s[40];
        int a,b;
        sscanf(line,"%s %d %d",s,&a,&b);
        strcpy(col[i].name,s);
        col[i].length=a;
        col[i].drainage_area=b;
        i++;
    }
    int j;
    qsort(col,i-1,sizeof(char*),sortName);
    for(j=0;j<i;j++)
    {
        fprintf(write,"%s %d %d\n",col[j].name, col[j].length, col[j].drainage_area);
    }
    fclose(read);
    fclose(write);
    return 0;
}
