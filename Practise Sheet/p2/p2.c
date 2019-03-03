/*
JTSK-320111
p2.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void itobs(unsigned int no, char *str)
{
    int i;
    for(i=0;i<8;i++)
    {
        str[i]='0';
    }
    i=7;
    while(no>0)
    {
        if(no%2==0)
        {
            str[i]='0';
        }
        else
        {
            str[i]='1';
        }
        no/=2;
        i--;
    }
    str[8]='\0';
}

int main()
{
    int n;
    char *arr;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        arr=(char*)malloc(sizeof(char)*8);
        itobs(n,arr);
        printf("Binary: %s\n",arr);
        free(arr);
    }
    return 0;
}
