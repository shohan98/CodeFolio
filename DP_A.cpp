#include<bits/stdc++.h>
using namespace std;
int arr[110][110],maxx=0,n,pos[100];
void maxxCost(int line,int pos,int cost){
    if(line == (2*n-2)){
        cost+= arr[line][pos];
        if(maxx<cost)
            maxx=cost;
       // printf("\t%d\t%d\n",maxx,cost);
        return;
    }
    else if(line<n-1){
        cost+= arr[line][pos];
        //printf("\t%d\n",cost);
        maxxCost(line+1,pos,cost);
        //printf("```0````%d %d %d\n",line,pos,cost);
        maxxCost(line+1,pos+1,cost);
        return;
    }
    else{
        cost+=arr[line][pos];
        //printf("\t\t%d\n",cost);
        int x = (line+1)%n;
        if(n-x-1!=pos){
            //printf("```1````%d %d %d\n",line,pos,cost);
            maxxCost(line+1,pos,cost);

        }
        if(pos){
          //  printf("```2````%d %d %d\n",line,pos,cost);
            maxxCost(line+1,pos-1,cost);

        }
        if(n-x-2>pos){
            //printf("```3````%d %d %d\n",line,pos,cost);
            maxxCost(line+1,pos+1,cost);

        }
        return;
    }
}
int main(){
    int i,j,k,t,cost;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=0;j<=n-1;j++){
            for(k=0;k<=j;k++){
                scanf("%d",&arr[j][k]);

            }
        }
        int c=2;
        for(j=n;j<2*n-1;j++,c+=2){
            for(k=0;k<=j-c;k++){
                scanf("%d",&arr[j][k]);

            }
        }
    cost = 0;
    maxxCost(0,0,cost);
    printf("Case %d: %d\n",i,maxx);
    maxx=0;
    }
    return 0;
}
