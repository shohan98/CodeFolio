#include<stdio.h>
int main(){
    unsigned long long int i,j,k,n,m,ans,arr[110],div[110];
    while(scanf("%llu %llu",&n,&m),n,m){
        ans=1;
        if(m<(n/2)){
            for(i=n-m+1;i<=n;i++){
                arr[i]=i;

            }
            for(i=2;i<=m;i++){
                div[i]=i;

            }
            for(i=2;i<=m;i++){
                for(j=n-m+1;j<=n;j++){
                    if(arr[j]%div[i]==0){
                        arr[j]/=div[i];
                        div[i]=1;
                        break;
                    }
                }
            }
            for(i=n-m+1;i<=n;i++){
                ans=ans*arr[i];

            }
            for(i=2;i<=m;i++){
                ans/=div[i];

            }
        }
        else{
            for(i=m+1;i<=n;i++){
                arr[i]=i;

            }
            for(i=2;i<=n-m;i++){
                div[i]=i;

            }
            for(i=2;i<=n-m;i++){
                for(j=m+1;j<=n;j++){
                    if(arr[j]%div[i]==0){
                        arr[j]/=div[i];
                        div[i]=1;
                        break;
                    }
                }
            }
            for(i=m+1;i<=n;i++){
                ans=ans*arr[i];

            }
            for(i=2;i<=n-m;i++){
                ans/=div[i];

            }
        }
        printf("%llu things taken %llu at a time is %llu exactly.\n",n,m,ans);
    }
}
