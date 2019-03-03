/*
JTSK-320111
p1.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int n;
    char ch;
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    getchar();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
