#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int i,j,n,m,k,day;
    scanf("%lld %lld",&n,&m);
    if(m>=n)
        day=n;
    else{
        day = ((2*m-1)+sqrt(8*n-4*m+1))/2;
        j=n;

        for(i=m+1;i<=day;i++){
            j=j-i+m;
        }

        if((j-m)>0)
            day++;

    }
    printf("%lld\n",day);
}
