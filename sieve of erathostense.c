#include<stdio.h>
#include<math.h>
int main(){
    long long int a,s,d,f,g,num,limit,prime[10000],mark[1000005];
    scanf("%lli",&num);
    for(a=4;a<=num;a+=2)
        mark[a]=1;
    limit=sqrt(num+2);
    prime[0]=2;
    for(a=3,s=1;a<=num;a++){

        if(mark[a]!=1){
            prime[s]=a;
            s++;
            if(a<=limit){
                for(d=a*a;d<=num;d+=a*2){
                    mark[d]=1;
                }
            }
        }
    }
    for(a=0;prime[a];a++)
        printf("%lli\n",prime[a]);
    return 0;
}
