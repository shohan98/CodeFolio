#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;
int main(){
    double  i,j,sR,bR,a,b,c,A_T,A_bigC,A_smallC;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
        i=(a+b+c)/2;
        A_T=sqrt(i*(i-a)*(i-b)*(i-c));
        sR=A_T/i;
        bR=(a*b*c)/4/A_T;
        A_bigC=PI*bR*bR;
        A_bigC-=A_T;
        A_smallC= PI*sR*sR;
        A_T-= A_smallC;

        printf("%.4lf %.4lf %.4lf\n",A_bigC,A_T,A_smallC);
    }
    return 0;
}
