#include<bits/stdc++.h>
using namespace std;

int main(){
   long long i,j,k,m,n,t,count,extra;
    while(scanf("%lld %lld",&m,&n)){
        if(!m && !n)
            break;
        extra=0;
        count=0;
        while(m || n){
            i=(m%10)+(n%10)+extra;
            extra = i/10;
            if(extra)
                count++;
            m=m/10;
            n=n/10;

        }
        if(!count)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%lld carry operations.\n",count);

    }

    return 0;
}
