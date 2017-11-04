#include<stdio.h>
struct student
{
    int marks;
    float cgpa;
    struct student *next;
};
typedef struct student stdnt;
void printall(stdnt *list)
{

    while((list->next)!=NULL)
    {
        printf("%d   %f\n",list->marks,list->cgpa);
        list=list->next;

    }
}
int main()
{
    stdnt *head= malloc(sizeof(stdnt));
    stdnt *start=head;
    int j;
    for(j=0;j<4;j++)
    {
        scanf("%d",&head->marks);
        scanf("%f",&head->cgpa);
        head->next=(stdnt*)malloc(sizeof(stdnt));
        head=head->next;
    }
    head->next = NULL;
    printall(start);
    return 0;
}
