#include<stdio.h>
int main()
{
    int a=1,b=5,ans,sum=0;
    while(a<=11)
    {
        sum=sum+b;
        b=b*5;
        a++;
    }
    printf("Answer is %i\n",sum);

    return 0;
}
