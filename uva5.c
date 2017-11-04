#include<stdio.h>
#include<math.h>

int main()
{
    double h,m,a,b,c;

    while(scanf("%lf:%lf",&h,&m)==2)
    {
        if(h==0 && m==0)
        {
            break;
        }
        a = ((h*30)+(0.5*m));
        b = (m*6);
        c = (a-b);

        if(c < 0)
        {
            c *= -1;
        }
        if(c > 180)
        {
            c = (360 - c);
        }

        printf("%.3lf\n",c);
    }

    return 0;
}
