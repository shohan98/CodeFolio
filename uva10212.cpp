#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,ans,k,n,m;
    while(scanf("%lld %lld",&n,&m),n,m){
        i=n-m;
        ans=1;
        for(j=i+1;j<=n;j++){
            ans = ans*(j%1000);
            ans = ans%1000;
        }
        if((ans%10) == 0){
                while((ans%10) == 0){
                    ans = ans/10;
                }
        }
        printf("%lld\n",ans%10);
    }
    return 0;
}
