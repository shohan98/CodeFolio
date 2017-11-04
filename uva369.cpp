#include<stdio.h>
int main(){
    unsigned long long i,j,n,m,k,ar[2],arr[110],key,ans;
    while(scanf("%llu %llu",&n,&m),n,m){
        ans=1;
        key=1;
        if(m>n/2){
            for(j=m+1;j<=n;j++)
                arr[j]=j;
            for(j=2;j<=n-m;j++){
                ar[j]=j;
            }
            for(i=2;i<=n-m;i++){
                for(j=m+1;j<=n;j++){
                    if(arr[j]%ar[i]==0){
                        arr[j]=arr[j]/i;
                        ar[i]=1;
                        break;
                    }
                }
            }
            for(j=m+1;j<=n;j++)
                ans*=arr[j];
            for(j=2;j<=n-m;j++)
                ans/=ar[j];
        }
        else{
            for(j=n-m+1;j<=n;j++)
                arr[j]=j;
            for(i=2;i<=m;i++){
                ar[i]=i;
                printf("%llu %llu\n",n,m);
            }

            for(j=n-m+1;j<=n;j++){
                ans*=arr[j];
            printf("%llu %llu %llu\n",ans,arr[j],m);}

            for(j=2;j<=m;j++)
                ans/=ar[j];
        }
        printf("%llu things taken %llu at a time is %llu exactly.\n",n,m,ans);
    }
}
