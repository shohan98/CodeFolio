#include<stdio.h>
int main()
{
    int n1,n2,i,Flag,temp;
    printf("Enter two numbers (intervals): ");
    scanf("%d   %d", &n1, &n2);
    if(n1>n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    printf("prime numbers between %d and %d\n", n1, n2);
    while(n1 <n2)
    {
        Flag=0;
        for(i=2;i<=n1/2;++i)
        {
            if(n1%i==0)
            {
                Flag=1;
                break;
            }
        }
        if(Flag==0)
            printf("%d\t", n1);
            ++n1;
    }
    return 0;
}
