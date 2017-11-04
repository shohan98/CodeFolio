#include<bits/stdc++.h>
using namespace std;

int main(){
    int j,k,m,n;
    vector <int>  v;

    printf("input array length : ");
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&m);
        vector <int> ::iterator i=lower_bound(v.begin(),v.end(),m);
        printf("%d\n",i);
        if(v.end() == i)
            v.push_back(m);
        else
            v[i-v.begin()]=m;
    }
    printf("%d %d %d\n",v.begin(),v.end(),v.size());
    for(j=0;j<v.size();j++){
        printf("%d ",v[j]);
    }
}
