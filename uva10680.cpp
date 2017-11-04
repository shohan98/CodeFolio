
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    unsigned long long int i,j,k,mul,range,n[100002],num,mod,prime[20000];
    i=4;
    while(i<100002){
        n[i]=1;
        i+=2;
    }
    prime[0]=2;
    range=sqrt(100002);
    for(i=3,k=1;i<=range;i+=2){
        if(!n[i]){
            for(j=2*i;j<100002;j+=i){
                n[j]=1;
            }
            prime[k]=i;
            k++;
        }
    }
    if(range&1)
        range+=1;
    for(i=range+1;i<100002;){
        if(n[i]!=1){
            prime[k]=i;
            k++;
        }
        i+=2;
    }
    while(scanf("%lli",&num)){
        if(!n)
            break;
        mul=1;
        for(i=0;i<=num;i++){
            for(j=prime[i];j<=num;j*=prime[i]);
            j=(j/prime[i]);
            mod=j%10;
            mul=mul*mod;


        }
        k=mul;
        mod=mul%10;
        while(!mod){
            mul/=10;
            mod=mul%10;
        }
        printf("%llu\n",mod);

    }
    return 0;
}
