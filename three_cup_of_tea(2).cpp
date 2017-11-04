#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    long long int t,n,i,j,k,price,cup[100009];
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        for(j=0;j<n;j++){
            scanf("%lld",&cup[j]);
        }
        price=0;
        sort(cup,cup+n);
        for(j=1;j<=n;j++){
            if(j%3==0)
                continue;
            price=price+cup[n-j];
        }
        printf("Case #%lld: %lld\n",i,price);
    }
    return 0;
}

