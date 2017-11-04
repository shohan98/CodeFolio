#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,n,mid,limit,count;
    vector <int> p;
    vector<int> prime;
    while(scanf("%d",&n),n){
        mid=n/2;
        for(i=0;i<=n;i++)
            p.push_back(0);
        limit=sqrt(n);

        for(i=3;i<=limit;i+=2){
            if(!p[i]){
                for(j=i*i;j<=n;j=j+(2*i)){
                    p[j]=1;
                }
            }
        }
        count=1;
        if(n%2){
            if(!p[n]);
            else count--;
        }
        for(i=3;i<=mid;i+=2){
            if(!p[i]){
                if(n%i==0){
                    count++;
                }
            }
        }

        printf("%d : %d\n",n,count,p[n]);
    }
    return 0;
}
