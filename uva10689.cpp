#include<bits/stdc++.h>
using namespace std;
int a,b,digit,arr[10000000];
int main(){
    unsigned long long int i,j,num,k,l,m,n,t,A,B;
    scanf("%llu",&t);
    while(t--){
        scanf("%d %d %llu %llu",&a,&b,&n,&m);
        for(i=0,digit=1;i<m;i++)digit*=10;
        arr[0]=a%digit;
        arr[1]=b%digit;
        for(i=2;i<=n;i++){
            arr[i] = (arr[i-1]+arr[i-2])%digit;
            //printf("%d ",arr[i]);
            if(arr[0]==arr[i-1] && arr[1] == arr[i]){
                n%=i-1;
                //printf("%llu %llu\n",i,n);
                break;
            }
        }

        printf("%d\n",arr[n]);

    }

    return 0;
}
