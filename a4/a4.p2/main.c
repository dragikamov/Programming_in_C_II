/*
JTSK-320112
a4 p2.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void small(char *s)
{
    int i,n=strlen(s)-1;
    for(i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            printf("%c",s[i]+32);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}

void big(char *s)
{
    int i,n=strlen(s)-1;
    for(i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            printf("%c",s[i]-32);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}

void edit(char *s)
{
    int i,n=strlen(s)-1;
    for(i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            printf("%c",s[i]-32);
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            printf("%c",s[i]+32);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}

void quit(char *s)
{
    exit(0);
}

void (*func[4])(char *)={big,small,edit,quit};


int main()
{
    char line[256];
    fgets(line,sizeof(line),stdin);
    int n;
    while(1)
    {
        scanf("%d",&n);
        getchar();
        func[n-1](line);
    }
    return 0;
}
