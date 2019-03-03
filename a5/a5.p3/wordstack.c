#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int main()
{
    char sen[256];
    int i;
    Stack lista;
    lista.n=0;
    while(1)
    {
        fgets(sen,sizeof(sen),stdin);
        sen[strlen(sen)-1]='\0';
        if(strcmp(sen,"exit")==0)
        {
            return 0;
        }
        char templet;
//        strcpy(tempword,"");
        for(i=0;i<strlen(sen);i++)
        {
            if(sen[i]==' ')
            {
                lista.n++;
//                strcpy(tempword,"");
//                printf("word=%s\n",tempword);
            }
            else
            {
                templet=sen[i];
                lista=push(lista,templet);
//                char c[1];
//                c[0]=sen[i];
//                printf("c=%c\n",c[0]);
//                strcat(tempword,c);
//                printf("s=%s\n",tempword);
            }
        }
        if(check(lista)==1)
        {
            printf("The sentence is palindromic by words!\n");
        }
        else
        {
            printf("The sentence is not palindromic by words!\n");
        }
    }
    return 0;
}
