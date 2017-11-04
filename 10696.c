#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    while(a!=0)
    {
        if (a>100){
            a=a-10;
            printf("f91(%i) = %i\n",a+10,a);
        }
        else
            printf("f91(%i) = 91\n",a);
        scanf("%i",&a);

    }
    return 0;
}
