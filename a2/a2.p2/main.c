/*
JTSK-320112
a2 p2.c
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char one[100], two[100], *res;
    fgets(one,sizeof(one),stdin);
    fgets(two,sizeof(two),stdin);
    one[strlen(one)-1]='\0';
    two[strlen(two)-1]='\0';
    res=(char *)malloc((strlen(one)+strlen(two)+1)*sizeof(char));
    res=strcat(one,two);
    printf("Result of concatenation: %s\n", res);
    ///I had a problem with the deallocation
    //free(res);
    return 0;
}
