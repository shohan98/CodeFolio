#include<stdio.h>
#include<math.h>
int main()
{
    int t,p,i,n,b;
    long long int f[1000010];
    scanf("%i",&t);
    for(i=1;i<=1000000;i++)
        f[i]=log(i)+f[i-1];
    for(p=1;p<=t;p++)
    {
        scanf("%i %i",&n,&b);
        printf("Case %i: %ldn",p,f[n]/(f[b]-f[b-1])+1);
    }
    return 0;
}
