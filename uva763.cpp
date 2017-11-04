#include<bits/stdc++.h>
using namespace std;
char num1[110],num2[110];
unsigned long long int ans[200],fib[210],len;
void  fibnary(unsigned long long int pos,unsigned long long int sum){
    printf("%llu %llu\n",pos,sum);
    if(pos==-1){
        printf("\n");
        return;
    }
    if(fib[pos]<=sum){
       // printf("1");
        fibnary(pos-1,sum-fib[pos]);

    }
    else{
      //  printf("0");
        fibnary(pos-1,sum);

    }

}
int main(){
    int i,j,k,n,m;
    //freopen("output.txt","w",stdout);
    fib[0]=1;
    fib[1]=2;
    for(i=2;i<205;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    k =0;
    printf("111 %llu",fib[120]);
    while(scanf("%s %s",&num1,&num2)==2){
        if(k)
            printf("\n");
        unsigned long long int sum =0;
        k++;
        for(i=strlen(num1)-1,j=0;i>=0;j++,i--){
            sum+=(fib[j]*(num1[i]-48));
           // printf("%d\n",sum);
        }
        //printf("%d\n",sum);

        for(i=strlen(num2)-1,j=0;i>=0;j++,i--){
            sum+=(fib[j]*(num2[i]-48));
        }

        len = strlen(num1)+strlen(num2);
        for(i=len;i>=0;i--)
            if(fib[i]<=sum)
                break;
        //len = i;
        printf("%llu %llu\n",len,sum);
        if(!sum){
            printf("0\n");
        }
        else
            fibnary(i,sum);
    }
}
