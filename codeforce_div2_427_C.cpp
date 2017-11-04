#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,i2,j,k,l,m,n,q,c,t,x[100000],y[100000],s[100000];

    scanf("%d %d %d",&n,&q,&c);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&x[i],&y[i],&s[i]);
    }
    for(i=0;i<q;i++){
        scanf("%d %d %d %d %d",&t,&j,&k,&l,&m);
        int sum =0;
        double dis = sqrt((((j-l)*(j-l))+((k-m)*(k-m)))*1.0);
        dis/=2.0;
        int a = (j+l)/2;
        int b = (k+m)/2;

        for(i2=0;i2<n;i2++){
        double d = sqrt((((a-x[i2])*(a-x[i2]))+((b-y[i2])*(b-y[i2])))*1.0);

        if (d<=dis){

                sum = sum+(t+s[i2])%(c+1);

            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
