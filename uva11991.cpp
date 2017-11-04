#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,x,j,k,n,m;
    vector <int> v;
    vector <vector<int> > a;
    while(scanf("%d %d",&n,&m)!=EOF){
        a.assign(1000009,vector<int>());
        for(i=0;i<n;i++){
            scanf("%d",&j);
            v.push_back(j);
            a[j].push_back(i);

        }
        for(i=0;i<m;i++){
            scanf("%d%d",&j,&k);
            if(j<=a[k].size())
                printf("%d\n",a[k][j-1]+1);
            else
                printf("0\n");

        }
        v.clear();
        for(i=0;i<n;i++)
            a[v[i]].clear();
    }
    return 0;
}
