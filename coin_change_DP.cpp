#include<bits/stdc++.h>
int main(){
    int i,j,k,n,c,coin[99999],posible[99999],way[99999],use[9999];
    while(1){
        printf("Enter amount : ",n);
        scanf("%d",&n);
        printf("Enter how many coin you have : ");
        scanf("%d",&c);
        printf("Enter coin amount : ");
        for(i=0;i<c;i++){
            scanf("%d",&coin[i]);
        }
        posible[0]=way[0]=1;
        for(i=1;i<=n;i++){
            posible[i]=0;
            way[i]=0;
            use[i]=0;
        }
        for(i=0;i<=n;i++){
            for(j=0;j<c;j++){
                if(i>=coin[j]){
                    posible[i]|=posible[i-coin[j]];
                    way[i]+=way[i-coin[j]];
                }
            }
        }
        if(posible[n]){
            printf("Posible and %d way\n",way[n]);
        }
        else
            printf("Not Posible and %d way\n",way[n]);

    }
    return 0;
}
