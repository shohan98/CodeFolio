#include<bits/stdc++.h>
using namespace std;

int num[32],pos[32],use[32],prime[39]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1};
void permutation(int per, int n){

    int i,j,key;
    if(per==n){
        if(!prime[pos[per-1]+pos[0]] || !prime[pos[per-1]+pos[per-2]])
            return;
        printf("%d",pos[0]);
        for(i=1;i<n;i++){
            printf(" %d",pos[i]);
        }
        printf("\n");
        return;
    }
    else if(!prime[pos[per-1]+pos[per-2]] && per!=1)
        return;
    for(i=1;i<n;i++){
        if(!use[i]){
            use[i]=1;
            pos[per]=num[i];
            permutation(per+1,n);
            use[i]=0;

        }
    }
    return;
}
int main(){
    int i,j,n,t=0;
    while(scanf("%d",&n)!= EOF){
        for(i=0;i<n;i++)
            num[i]=i+1;
        use[0]=1;
        pos[0]=1;
        if(t)
            printf("\n");
        t++;
        printf("Case %d:\n",t);
        for(i=1;i<n;i++)
            use[i]=0;
        permutation(1,n);
    }
    return 0;
}

