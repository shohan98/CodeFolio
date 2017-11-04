#include<math.h>
#include<stdio.h>
int main()
{
    int a,s,d,f,g;
    while(scanf("%i",&a),a)
    {

        f=sqrt(a-2);
        for(d=3;d<=f;d+=2)
                if((a-2)%d==0)
                        break;
        if((d-1==f || d-2==f) && (a-2)%2!=0  ){
            printf("%i = 2 + %i\n",a,a-2);
            continue;}
        for(s=3;s<=a/2;s+=2)
        {
            f=sqrt(s);

            for(d=3;d<=f;d+=2)
                if(s%d==0)
                    break;

            if(d-1==f || d-2==f || s==3 )
            {
                g=a-s;
                f=sqrt(g);
                if(g%2==0)
                    continue;

                for(d=3;d<=f;d+=2)
                    if(g%d==0)
                        break;

                if(d-1==f || d-2==f ){
                    printf("%i = %i + %i\n",a,s,g);
                    break;
                }
            }
        }
        if(s-1==a/2 || s-2==a/2)
            printf("%i = 0 + %i\n",a,a);
    }
    return 0;
}
