#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long  long i,j,prev,k,m,n;
    vector<int> prime,p;
    for(i=0;i<=509;i++)
        p.push_back(0);
    //printf("%llu\n",i);
    for(i=3;i*i<=509;i+=2){
        if(!p[i]){
            for(j=i*i;j<=509;j+=i*2)
                p[j]=1;
        }
    }
    //printf("%llu\n",i);
    //prime.push_back(2);
    for(i=3;i<=509;i+=2){
       // printf("%d %d\n",p[i],i);
        if(!p[i])
            prime.push_back(i);
    }
    while(scanf("%llu",&n),n){
        int num = n;
        int ans  =1;
        while(num>1){
            n = num;
            int sum = 1;
            m=1;
            //printf("%d %d\n",prime[100],sum);

            if(n&2 !=1){
                m*=2;
                while(n&2 !=1)
                    n/=2;
            }
            for(i=0;prime[i]*prime[i]<=n;i++){
              // printf("%d %d\n",prime[i],n);
                if(n%prime[i] == 0){
                   // printf("%d --\n",n);
                    sum*=(prime[i]-1);
                    m*=prime[i];
                    while(n%prime[i]==0) n/=prime[i];

                }
            }
            if(n>2)
                sum*=(n-1);
            m*=n;
           // printf("%d %llu %d\n",ans,n,(num/m)*sum);
            ans+=(num/m)*sum;

            num--;
        }
        printf("%d\n",2*ans-1);
    }
    return 0;
}

