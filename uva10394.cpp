#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long limit,size,i,j,k,pos,m,n;
    vector <unsigned long long> p,prime,v;
    for(i=0;i<=18500000;i++){
        v.push_back(0);
    }
    for(i=1;i<=9250000;i++)
        v[2*i]=1;
    prime.push_back(2);
    limit=sqrt(18500000);
    for(i=3;i<=limit;i+=2){
        if(!v[i]){
            for(j=i*i;j<=18500000;j+=i){
                v[j]=1;
            }
        }
    }
    for(i=3;i<=18500000;i+=2){
        if(!v[i])
            prime.push_back(i);
    }
    size=prime.size();
    for(i=1,j=0,pos=1;i<size;i++){
        if((prime[i]-prime[i-1])==2){
            p.push_back(pos);
            p.push_back(prime[i-1]);
            p.push_back(prime[i]);
            j+=3;
            pos++;
        }
    }
    while(scanf("%llu",&n)==1){
        k=(n-1)*3;
        printf("(%llu, %llu)\n",p[k+1],p[k+2]);
    }


    return 0;
}
