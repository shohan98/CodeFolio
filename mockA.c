#include<stdio.h>

int main()
{

    long long n,tc,i,j;


    scanf("%lld",&tc);
    if(tc>0){
    for(i=0;i<tc;i++){
        scanf("%lld",&n);

        for(j=0;j<=n;j++)
        {
            printf("%lld ",j);
        }
        printf("\n");
        }
    }
}
