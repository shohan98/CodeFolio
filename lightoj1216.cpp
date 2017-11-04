#include<stdio.h>
int main(){
    int i,t;
    double k,r1,r2,h,p,v,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
        k = r2+((p*(r1-r2))/h);
        x=(p*k)/(k-r2);
        v=((3.14159265358979*k*k*x)/3)-((3.14159265358979*r2*r2*(x-p))/3);
        printf("Case %d: %.9lf\n",i,v);
    }
    return 0;
}
