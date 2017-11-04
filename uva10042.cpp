#include<bits/stdc++.h>
using namespace std;

vector <int> v;
vector <unsigned long long> prime;
unsigned long long num = 10009;
int main(){
    unsigned long long sum1,sum2,i,j,b,k,n,t;
    int x;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    for(i=0;i<=num;i++)
        v.push_back(0);
    int limit=sqrt(num);
    for(i=4;i<=num;i+=2)
        v[i]=1;
    for(i=3;i<=limit;i+=2){

        if(!v[i])
            for(j=i*i;j<=num;j+=2*i)
                v[j]=1;
    }
    prime.push_back(2);
    for(i=3;i<=num;i+=2)
        if(!v[i])
            prime.push_back(i);
    j=prime.size();
    //------------Generate all possible prime number-------//
    scanf("%lld",&t);
    while(t--){
        scanf("%llu",&n);
        k=0;
        for(i=n+1;!k;i++){
            sum1 = 0;
            //printf("%llu ",i);
            for(x=0,b=i;prime[x]<=b/2 && x<j;x++){

                if((b%prime[x])==0){
                    b=b/prime[x];
                    long long int prime_fact  = prime[x];
                    while(prime_fact){
                        sum1+=(prime_fact%10);
                        prime_fact/=10;
                    }
              //      printf("%llu %llu\n",b,sum1);
                    x--;
                }
            }
            while(b>0 && b!=i){

                    sum1+=(b%10);
                    b/=10;
                   // printf("%llu %llu\n",b,sum1);
            }
          //  printf("%llu %llu\n\n",b,sum1);
            sum2=0;
            b=i;
            while(b){
                sum2+=(b%10);
                b/=10;
            }
            if(sum1==sum2)
                k=1;
        }
        printf("%lld\n",i-1);
        v.clear();
    }
    return 0;
}
