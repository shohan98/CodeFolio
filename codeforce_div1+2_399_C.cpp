#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,x,m,n;
    vector <int> v;
    scanf("%d%d%d",&n,&k,&x);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        v.push_back(j);
    }
    if(k&1){
        m = (v[0]^x);
        if(m<=v[1])
            v[0]=m;
        for(i=1;i<n;i++){
            m = (v[i]^x);
            if(m>v[i-1])
                v[i]=m;

        }
        sort(v.begin(),v.end());
        printf("%d %d\n",v[n-1],v[0]);

    }
    else
        printf("%d %d\n",v[n-1],v[0]);
    return 0;
}

