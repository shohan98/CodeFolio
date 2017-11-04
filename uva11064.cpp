#include<bits/stdc++.h>
using namespace std;
int main(){
    long int i,j,prev,k,m,n;
    vector<long long int> prime,p;
    for(i=0;i<100009;i++)
        p.push_back(0);
    //prlong intf("%ld\n",i);
    for(i=3;i*i<100009;i+=2){
        if(!p[i]){
            for(j=i*i;j<=100009;j+=i*2)
                p[j]=1;
        }
    }
    //prlong intf("%ld\n",i);
    //prime.push_back(2);
    for(i=3;i<=100009;i+=2){
       // prlong intf("%d %d\n",p[i],i);
        if(!p[i])
            prime.push_back(i);
    }
    while(scanf("%ld",&n)!=EOF){
        long int sum = 1;
        m=1;
        //prlong intf("%d %d\n",prime[100],sum);
        if(n == 1 || n==0 )
            printf("0\n");
        else{
            long int num = n;
            long int c=0;
            j=0;
            if(n%2 == 0){
                m*=2;
                while(n%2 == 0){
                    n/=2;
                }

            }
            for(i=0;prime[i]*prime[i]<=n;i++){
            //   prlong intf("%d %d\n",prime[i],n);
                if(n%prime[i] == 0){
                   // prlong intf("%d --\n",n);
                    sum*=(prime[i]-1);
                    m*=prime[i];
              //      prlong intf("ok");
                    while(n%prime[i]==0){
                            n/=prime[i];

                    }

                }
            }
            if(n>2){
                sum*=(n-1);
            }
            m*=n;
           // prlong intf("%ld %ld %d\n",m,n,sum);
            long int ans = (num/m)*sum;
            long int a = sqrt(num);
            if(num&1)
                for(i=3;i<=a;i+=2){
                    if(num%i==0){
                        c+=2;
                        //printf("%d %d %d\n",i,n,num);

                    }
                }
            else
                for(i=2;i<=a;i++){
                    if(num%i==0){
                        c+=2;

                        //printf("%d %d %d\n",i,n,num);

                    }
                }

            if(a*a == num)
                c--;
            //prlong intf("%ld %ld %ld %d\n",i,n,ans,c);
            printf("%ld\n",num-ans-c-1);

        }
    }
    return 0;
}
