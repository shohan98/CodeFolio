#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int t,n,i,j,k,price,mod,cup[100000];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&cup[j]);
        }
        sort(cup,cup+4);
        mod=n%3;
        k=n/3;
        for(j=mod;j<k+mod;j++){
            cup[j]=0;
        }
        price=0;
        for(j=0;j<n;j++)
            price=price+cup[j];
        printf("Case #%d: %d\n",i,price);
    }
    return 0;
}
