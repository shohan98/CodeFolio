#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    int a1,a2,b1,b2,c1,c2;
    int p,q,r,s;
    scanf("%i",&t);

    scanf("%i %i %i %i %i %i",&a1,&a2,&b1,&b2,&c1,&c2);

    p=a1;
    q=b1;
    r=c1;

    if((p+q+r)==t)
    {
        printf("%i %i %i",p,q,r);
    }
    else
    {
        while(1)
        {
            if(r<t && r<c2)
            {
                r++;
            }
            else
            {
                break;
            }
        }
        s=r;

        while(1)
        {
            if(q<t&&q<b2&&(q+s)<t)
            {
                q++;
            }
            else
            {
                break;
            }
        }

        s=s+q;

        while(1)
        {
            if(p<t&&p<a2&&(p+s)<t)
            {
                p++;
            }
            else
            {
                break;
            }
        }

        printf("%i %i %i",p,q,r);

    }
    return 0;
}

