#include <stdlib.h>
#include <string.h>

int main () {

    FILE *Input;

    long lSize;

        Input = fopen("/home/srinivas/Desktop/cl.txt","r+");

    if (Input ==NULL) {fputs ("File error",stderr); exit (1);}

    fseek (Input ,0 , SEEK_END);

    lSize = ftell (Input); printf(" The file size is = %ld",lSize);

        char string1[24];


        printf("\n Enter the string you want to search \n");

    gets(string1);

        printf("\n The read string is =%s ",string1 );

       //do{

        int i=0;
    char string2[24];



 /* Read one word for the text file */

    do{
             while( fgets(string2,20,Input) != '\0')
              {
        //string2[i] = fgetc(Input);
                //printf("%c",string2);
        //i++;
          }

    printf("the string2 is %s =",string2);
    printf(" In do loop");


        if( strcmp(string1,string2) == 0)
         {
        printf(" string successfully searched : string2 = %s",string1);
                 break;
        }

    else
        {    printf(" string Not found");
        }
         }while(!feof(Input));


            }
