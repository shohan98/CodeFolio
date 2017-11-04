#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main(){
    int k;
    double a,r,i,j,dotted_area,strip_area,rest_area,B,C,A;
    while(scanf("%lf",&a)!= EOF){
        i = a*a;
        j=sqrt(3);
        rest_area = i*((12-3*j-2*pi)/3);
        dotted_area = i*(6*j+pi-12)/3;
        strip_area = i*(3+pi-3*sqrt(3))/3;

        printf("%.3lf %.3lf %.3lf\n",strip_area,dotted_area,rest_area);

    }
    return 0;
}
