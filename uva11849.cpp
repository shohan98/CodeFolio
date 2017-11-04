#include<bits/stdc++.h>
bool arr[100000009];
int num[1000009];
int main(){
    int i,j,k,m,n,cnt;
    while(scanf("%d%d",&m,&n),m+n){
       // memset(arr,false,sizeof(arr));
        cnt = 0;
        for(i=0;i<m;i++){
            scanf("%d",&k);
            arr[k]=true;
            num[i] = k;
        }
        for(i=0;i<n;i++){
            scanf("%d",&k);
            if(arr[k])
                cnt++;
            //printf("%d %d\n",cnt,arr[k]);
        }
        for(i=0;i<m;i++){
            arr[num[i]]=false;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
