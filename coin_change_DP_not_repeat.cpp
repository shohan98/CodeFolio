#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,c,count,posible[99999],way[99999],use[9999];
    vector < int > coin;
    while(1){
        printf("Enter amount : ",n);
        scanf("%d",&n);
        printf("Enter how many coin you have : ");
        scanf("%d",&c);
        printf("Enter coin amount : ");
        for(i=0;i<c;i++){
            scanf("%d",&k);
            coin.push_back(k);
        }
        posible[0]=way[0]=1;
        for(i=1;i<=n;i++){
            posible[i]=0;
            way[i]=0;
        }
        for(i=0;i<=n;i++){
            for(j=0;j<c;j++){
                if(i>=coin[j]){
                    posible[i]|=posible[i-coin[j]];
                }
            }
        }
        if(posible[n]){
            printf("Posible\n");
        }
        else
            printf("Not Posible\n");
        for(j=0;j<c;j++)
            way[coin[j]]=1;
        for(j=0;j<c;j++)
            for(i=1;i<n;i++){

                if(i>=coin[j] && way[i-coin[j]] && ((i%coin[j])!=0))
                    way[i]=1;
            }
        count=0;
        for(i=1;i<=n/2;i++){
                printf("%d %d %d %d\n",i,way[i],way[n-i]);
            if(way[i] && way[n-i])
                count++;

        }
        printf("way = %d\n",count);
        coin.clear();

    }
    return 0;
}
