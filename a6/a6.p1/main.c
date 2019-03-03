/*
JTSK-320112
a6 p1.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char filename[255];
    fgets(filename,sizeof(filename),stdin);
    filename[strlen(filename)-1]='\0';
    FILE *f;
    f=fopen(filename,"r");
    if(f==NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }
    char line[255];
    int total=0;
    while(fscanf(f,"%s",line)!=EOF)
    {
//        printf("%s\n",line);
        int n=0,num=0,wordFound=0,carry=0;
        while(n<strlen(line))
        {
            if(line[n]=='\n' || line[n]=='.'
                    || line[n]==' ' || line[n]=='!'
                    || line[n]=='?' || line[n]==','
                    || line[n]=='\t' || line[n]=='\r')
            {
                if(wordFound==1)
                {
                    wordFound=0;
                    num++;
                    carry=0;
                }
                else
                {
                    carry=1;
                }
            }
            else if(carry==1)
            {
                carry=0;
                num++;
            }
            n++;
        }
        num++;
        total+=num;
    }
    printf("The file contains %d words.\n",total);
    fclose(f);
    return 0;
}
