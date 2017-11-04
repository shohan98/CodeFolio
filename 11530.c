#include<stdio.h>
int main()
{
    int a,s,d,g,sum,t;
    char c,as[110];
    while(scanf("%i",&t)==1)
    {
        getchar();
        for(g=1;t>=g;g++)
        {
            sum=0;
            gets(as);


            for(s=0;as[s];s++)
            {
                if(as[s]==' ')
                    sum =sum+1;
                else if(as[s]<'p')
                {
                    a=(as[s]-96)%3;
                    if(a==0)
                        sum=sum+3;
                    else
                        sum=sum+a;
                }
                else if(as[s]<'w')
                {
                    a=(as[s]-111)%4;
                    if(a==0)
                        sum=sum+4;
                    else
                        sum=sum+a;
                }
                else if(as[s]<='z')
                {
                    a=(as[s]-118);
                    sum=sum+a;
                }

            }
            if(sum!=0)
                printf("Case #%i: %i\n",g,sum);
        }
    }
    return 0;
}
