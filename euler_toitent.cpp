#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long  long i,j,prev,k,m,n;
    vector<int> prime,p;
    for(i=0;i<100009;i++)
        p.push_back(0);
    //printf("%llu\n",i);
    for(i=3;i*i<100009;i+=2){
        if(!p[i]){
            for(j=i*i;j<=100009;j+=i*2)
                p[j]=1;
        }
    }
    //printf("%llu\n",i);
    //prime.push_back(2);
    for(i=3;i<=100009;i+=2){
       // printf("%d %d\n",p[i],i);
        if(!p[i])
            prime.push_back(i);
    }
    while(scanf("%llu",&n),n){
        int sum = 1;
        m=1;
        //printf("%d %d\n",prime[100],sum);
        if(n == 1 )
            printf("1\n");
        else{
            prev = 1;
            int num = n;
            if(n%2 == 0){
                m*=2;
                while(n%2 == 0)
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
            //printf("%llu %llu %d\n",m,n,sum);
            printf("%d\n",(num/m)*sum);
        }
    }
    return 0;
}
