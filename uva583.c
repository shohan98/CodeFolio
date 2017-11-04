#include<stdio.h>
int main()
{
    long int a,s,d;
    while(scanf("%li",&a)==1)
    {
        if(a==0)
            break;

        else if(a<0)
        {
            printf("%li = ",a);
            a=a*-1;
            printf("-1 x ");
        }
        else
        {
            printf("%li = ",a);
        }

        while(a%2==0)
        {
            printf("2");
            a=a/2;
            if(a>1)
                printf(" x ");
        }

        for(s=3; s*s<=a; s+=2)
        {
            if(a%s==0)
            {
                printf("%li x ",s);
                a=a/s;
                s-=2;
            }
        }
        if(1!=a)
            printf("%li",a);
        printf("\n");
    }
    return 0;
}
