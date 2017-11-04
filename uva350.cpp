#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int i,j,k,m,n,z,l,count;
    k=1;
    while(scanf("%lld%lld%lld%lld",&z,&i,&m,&l),z,i,m,l){
        count=0;
        n=-1;
        j=l;
       // z = z%m;
       // i = i%m;

        while(n!=j){
            n=(z*l+i)%m;
            l=n;
            count++;
            printf("%lld %lld %lld\n",n,count,z);
        }
        printf("Case %lld: %lld\n",k,count);
        k++;
    }

    return 0;
}
