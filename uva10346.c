#include<stdio.h>
int main(){
    long long int n,k,i,extra,j;
    while(scanf("%lli %lli",&n,&k)==2){
        i=n;
        extra=0;
        while(i>=k){
            extra+=(i/k);

            i=(i/k)+(i%k);


        }
        printf("%lli\n",n+extra);
    }
    return 0;
}
