typedef struct list_name
{
    char name[50];
}List;
typedef struct stack
{
    List names[30];
    unsigned int n;
}Stack;

Stack push(Stack lst, char let);
int check(Stack lst);
