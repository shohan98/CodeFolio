#include<stdio.h>
#include<math.h>
int main(){
    int t,l,a,s;
    double garea,rarea,r,w,p;
    p=acos(-1);
    scanf("%i",&t);
    while(t--){
        scanf("%i",&l);
        w=l*.6;
        r=l*.2;
        rarea=p*r*r;
        garea=l*w-rarea;
        printf("%.2lf %.2lf\n",rarea,garea);

    }
    return 0;
}

