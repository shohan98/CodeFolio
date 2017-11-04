#include<stdio.h>
int main(){
    int t,t1,t2,f,a,c1,c2,c3,c,s,d,sum;
    scanf("%i",&t);
    for(s=1;s<=t;s++){
    scanf("%i %i %i %i %i %i %i",&t1,&t2,&f,&a,&c1,&c2,&c3);

    if(c1<=c2 && c1<=c3)
        c=(c3+c2)/2;
    else if(c2<=c3 && c2<=c1)
        c=(c1+c3)/2;
    else
        c=(c1+c2)/2;
    sum=t1+t2+f+a+c;
    if(sum>=90)
        printf("Case %i: A\n",s);
    else if(sum>=80)
        printf("Case %i: B\n",s);
    else if(sum>=70)
        printf("Case %i: C\n",s);
    else if(sum>=60)
        printf("Case %i: D\n",s);
    else
        printf("Case %i: F\n",s);
    }
    return 0;
}
