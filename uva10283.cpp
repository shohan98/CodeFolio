#include<bits/stdc++.h>
#define pi 3.141592653589793238462
using namespace std;
int main(){
    int i,j,k;
    double I,E,r,n,a,n_Area,R,circle_area;
    while(scanf("%lf %lf",&R,&n)!=EOF){
        if(n==1)
            printf("%.10lf  0.0000000000 0.0000000000\n",R);
        else{
            r=(R*sin(pi/n))/(sin(pi/n)+1);
            a=pi*r*r*(n-2)/2;
            circle_area=pi*r*r*n;
            n_Area = n*r*r/tan(pi/n);
            I=n_Area-a;
            E= pi*R*R-circle_area-I;
            printf("%.10lf  %.10lf %.10lf\n",r,I,E);
        }
    }

    return 0;
}
