#include<stdio.h>
#include<string.h>

int main()
{
    long long int a,s,d,f,g,h;
    char as[100],sd[100];

    while(scanf("%lli",&g)==1){
        while(g--)
        {
            s=0;
            scanf("%lli",&d);
            a=d;
            f=0;
            while(a!=0)
            {
                    f=f*10+a%10;
                    a=a/10;

            }

            do
            {
                d=d+f;
                a=d;
                f=0;
                while(a!=0)
                {
                    f=f*10+a%10;
                    a=a/10;
                }
            s++;
            }
            while(d!=f);
            printf("%lli %lli\n",s,d);
        }
    }
    return 0;
}
