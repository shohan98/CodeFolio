#include<stdio.h>
struct bal{
    int num;
    struct bal *next;

};
struct bal *start=NULL;
void main()
{
    struct bal *n,*crnt;
    int a,i;
    printf("loop time : ");
    scanf("%i",&a);
    for(i=1;i<=a;i++){
    n=(struct bal*)malloc(sizeof(struct bal));
    printf("\nEnter : ");
    scanf("%i",&n->num);
    n->next=start;
    start=n;
    }
    n=start;
    while(n!=NULL)
    {
        printf("%i--++*#()\n",n->num);
        n=n->next;
    }

}
