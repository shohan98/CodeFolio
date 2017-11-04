#include<bits/stdc++.h>
using namespace std;
int arr[110][110],maxx=0,n,pos[100];
int main(){
    int i,j,k,t,cost;
    scanf("%d",&t);
    for(int ii=1;ii<=t;ii++){
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
        //scan complete//
        cost = 0;
        for(i=0;i<2*n-2;i++)
            cost+=arr[i][0];
        maxx = cost;

        //left calculation complete//
        cost = 0;
        for(i=0;i<n;i++)
            cost+=arr[i][i];
        int x = 2;
        for(i=n;i<2*n-1;i++){
            cost+=arr[i][i-x];
            x+=2;
        }
        if(cost>maxx)
            maxx = cost;

        //right calculation complete//
        cost = 0;
        for(i=1;i<n-1;i++){
            cost = arr[n-1][i];
            for(j=1;j<n;j++)
                cost+=arr[n-1+j][i]+arr[n-1-j][i];
                if(cost>maxx)
                    maxx = cost;
            printf("%d 1` %d\n",j,cost);
            cost = arr[n-1][i];

            for(j=1;j<n;j++)
                cost+=arr[n-1+j][i]+arr[n-1-j][i-1];
            if(cost>maxx)
                maxx = cost;
            printf("%d 2` %d\n",j,cost);
            cost = arr[n-1][i];

            for(j=1;j<n;j++)
                cost+=arr[n-1+j][i-1]+arr[n-1-j][i];
            if(cost>maxx)
                maxx = cost;
            printf("%d 3` %d\n",j,cost);
            cost = arr[n-1][i];

            for(j=1;j<n;j++)
                cost+=arr[n-1+j][i-1]+arr[n-1-j][i-1];
            if(cost>maxx)
                maxx = cost;
            printf("%d 4` %d\n",j,cost);

        }
        printf("Case %d: %d\n",ii,maxx);
        maxx=0;
    }
    return 0;
}

