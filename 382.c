#include<stdio.h>
#include<math.h>

int main()
{
    int a,s,sum,d,f;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%i",&a)==1)
    {
        sum=1;
        if(a==0){
            printf("END OF OUTPUT\n");
            break;
        }
        d=sqrt(a);
        if(a==1){
            printf("    1  DEFICIENT\n");
            continue;
        }
        for(s=2;s<=d;s++)
        {
            if(a%s==0){
                sum=sum+s;
                if(s!=a/s)
                    sum=sum+a/s;
            }
        }
        if(a<10)
        printf("    %i ",a);
        else if(a<100)
        printf("   %i ",a);
        else if(a<1000)
        printf("  %i ",a);
        else if(a<10000)
        printf(" %i ",a);
        else if(a<100000)
        printf("%i ",a);
        if(a==sum)
            printf(" PERFECT\n");
        else if(a>sum)
            printf(" DEFICIENT\n");
        else
            printf(" ABUNDANT\n");

    }
    return 0;
}
