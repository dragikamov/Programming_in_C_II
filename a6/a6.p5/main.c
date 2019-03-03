/*
JTSK-320112
a6 p5.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///I first solved it not in the binary mode
///so I left that part commented.

///Also the output of the binary mode was a bit strange
int main()
{
    char files[100][50];
    int n,i;
    scanf("%d",&n);
    getchar();
    FILE *f;
    FILE *w;
    w=fopen("output.txt","w+");
    if(w==NULL)
    {
        exit(1);
    }
    for(i=0; i<n; i++)
    {
        fgets(files[i],sizeof(files[i]),stdin);
        files[i][strlen(files[i])-1]='\0';
    }
    printf("Concating the content of 3 files ...\n");
    printf("The result is:\n");
    for(i=0; i<n; i++)
    {
//        char c;
        f=fopen(files[i],"r");
        if(f==NULL)
        {
            exit(1);
        }
        char *buff;
        fseek(f,0,SEEK_END);
        int size=ftell(f);
        fseek(f,0,SEEK_SET);
        buff=malloc(sizeof(char)*(size+1));
        fread(buff,sizeof(char),size,f);
        fwrite(buff,sizeof(char),size,w);
        printf("%s\n",buff);
        fwrite("\n",sizeof(char),1,w);
//        c=getc(f);
//        while(c!=EOF)
//        {
//            putc(c,w);
//            printf("%c",c);
//            c=getc(f);
//        }
//        printf("\n");
//        putc('\n',w);
        fclose(f);
        free(buff);
    }
    printf("The result was written into output.txt");
    return 0;
}
