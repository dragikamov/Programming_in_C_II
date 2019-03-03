#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char line[256],pass[256];
//    long sizeF;
    fgets(line,sizeof(line),stdin);
    line[strlen(line)-1]='\0';
    FILE *f;
    f=fopen(line,"r");
    if(f==NULL)
    {
        exit(1);
    }
//    fseek(f,0,SEEK_END);
//    sizeF=ftell(f);
    while(1)
    {
        fseek(f,0,SEEK_SET);
        fgets(line,sizeof(line),stdin);
        line[strlen(line)-1]='\0';
        if(strcmp(line,"exit")==0)
        {
            return 0;
        }
//        fgets(pass,sizeof(pass),stdin);
//        pass[strlen(pass)-1]='\0';

        char word[100];
        fgets(word,strlen(line)+1,f);
        printf("%s\n",word);
//        while(strcmp(word,line)!=0)
//        {
            fseek(f,1,SEEK_CUR);
            fgets(word,strlen(line)+1,f);
            printf("s=%s\n",word);
//        }
        if(strcmp(word,line)==0)
        {
            printf("Yes\n");
        }
    }
    fclose(f);
//    printf("%s\n",line);
    return 0;
}
