#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,c,count,posible[99999],way[99999],use[9999];
    vector < int > coin;
    while(1){
        scanf("%d",&n);
        scanf("%d",&c);
        for(i=0;i<c;i++){
            scanf("%d",&k);
            coin.push_back(k);
        }
        posible[0]=way[0]=1;
        for(i=1;i<=n;i++){
            posible[i]=0;
            way[i]=0;
        }
        for(j=0;j<c;j++)
            way[coin[j]]=1;
        coin[1]=0;
        k=0;
        for(j=0;j<c;j++){
            if(coin[j] == 1){
                k=1;
                continue;
            }
            for(i=1;i<=n;i++){

                if(i>=coin[j] && way[i-coin[j]])
                    way[i]=1;
                 printf("%d %d %d\n",i,j,way[i]);
            }
        }
        count=0;
        for(i=0;i<=n/2;i++){

            if(way[i] && way[n-i])
                count++;

        }
        if(k)
        for(j=2;j<n;j++)
            for(i=0;i<=j/2;i++){

                if(way[i] && way[j-i])
                    count++;

        }
        printf("way = %d\n",count);
        coin.clear();

    }
    return 0;
}

