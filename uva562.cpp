#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int maximum;
int check;
int knapsack(int m, int w,int sum,int pos){
    //printf("%d %d\n",pos,sum);
    if(!w || check){
        if(sum>maximum)
            maximum = sum;

        return sum;
    }
    for(int i=pos;i<m && !check;i++){

        if(v[i]==w){
            check = 1;
            knapsack(m,w-v[i],sum+v[i],i+1);
        }
        else if(v[i]<w){
           // printf("%d %d %d %d\n",m,i,sum+v[i],maximum);
            knapsack(m,w-v[i],sum+v[i],i+1);
        }
    }
    if(sum>maximum)
        maximum = sum;

    return sum;
}
int main(){
    int i,j,sum,ans,k,m,n;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        sum=0;
        maximum = 0;
        for(j=0;j<m;j++){
            scanf("%d",&k);
            v.push_back(k);
            sum+=k;
        }
        check = 0;
        knapsack(m,sum/2,0,0);
       // printf("%d %d \n",sum,maximum);
        int l = sum -(2*maximum);
        printf("%d\n",l);
        v.clear();
    }
}
