#include<bits/stdc++.h>
using namespace std;

int main(){
    double i,j,k,l,w,h,theta;
    scanf("%lf %lf %lf %lf",&l,&w,&h,&theta);
    i = l*tan(theta*3.14159265/180);
    double extra_area = (l*i*w)/2;
    double area = (l*w*h);
    printf("%.3lf mL\n",area-extra_area);

    return 0;
}
