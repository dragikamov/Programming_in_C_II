/*
JTSK-320112
a6 p6.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f=fopen("chars.txt","r");
    if(f==NULL)
    {
        exit(1);
    }
    char elems[4];
    fread(elems,sizeof(char),3,f);
    char a,b;
    a=elems[0];
    b=elems[2];
    int c=(int)a+(int)b;
    FILE *w;
    w=fopen("codesum.txt","wb");
    if(w==NULL)
    {
        exit(1);
    }
    fwrite(&c,sizeof(int),1,w);
    fclose(w);
    fclose(f);
    return 0;
}
