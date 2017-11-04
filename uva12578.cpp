#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main(){
    double i,j,k,l,r,w,circle_area,rectangle_area;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf",&l);
        w = l*.6;
        r = l*.2;
        circle_area = pi*r*r;
        rectangle_area = (l*w)-circle_area;
        printf("%.2lf %.2lf\n",circle_area,rectangle_area);
    }
    return 0;
}
