#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i,j,k,m,ans,n;
    vector <long long> v11,v12;
    vector <long long > v21,v22;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&j);
        v11.push_back(j);
        scanf("%lld",&j);
        v12.push_back(j);
    }
    scanf("%lld",&m);
    for(i=0;i<m;i++){
        scanf("%lld",&j);
        v21.push_back(j);
        scanf("%lld",&j);
        v22.push_back(j);
    }
    sort(v12.begin(),v12.end());
    sort(v21.begin(),v21.end());
    sort(v11.begin(),v11.end());
    sort(v22.begin(),v22.end());
    ans=v21[m-1]-v12[0];
    if(ans<(v11[n-1]-v22[0]))
        ans=(v11[n-1]-v22[0]);
    if(ans<0)
        ans=0;
    printf("%d\n",ans);
    return 0;
}
