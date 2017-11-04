#include<stdio.h>
int main(){
    long long int i,j,n,t,ans;
    scanf("%lli",&t);
    while(t--){
        scanf("%lli",&n);
        ans=0;
        if(n<0);
        else if(n<100000){
            for(i=1;i<=n/5;i++){
                ans=ans+(n/i);

            }
            ans=ans+(n/4-n/5)*4;
            ans=ans+(n/3-n/4)*3;
            ans=ans+(n/2-n/3)*2;
            ans=ans+(n-n/2);
        }
        else{
            for(i=1;i<=n/100000;i++){
            ans=ans+(n/i);

            }
            for(j=100000;j>1;j--){
                ans=ans+((n/(j-1))-(n/j))*(j-1);

            }
        }
        printf("%lli\n",ans);
    }
}
