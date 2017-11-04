#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,n;
    vector<int> v;
    while(scanf("%d",&n),n){
        for(i=0;i<n;i++){
            scanf("%d",&j);
            v.push_back(j);
        }
    sort(v.begin(),v.end());
    printf("%d",v[0]);
    k=v.size();
    for(i=1;i<k;i++)
        printf(" %d",v[i]);
    printf("\n");
    v.clear();
    }

    return 0;
}
