#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int i,j,k,m,n,x;
    vector <unsigned long long int> v;
    scanf("%llu %llu",&n,&m);
    for(i=0;i<=n;i++)
        v.push_back(0);
    for(i=0;i<m;i++){
        scanf("%llu%llu",&j,&k);
        v[j]++;
        v[k]++;
    }

    for(i=1;i<=n;i++){
        if(v[i]){
            x=v[i];
            break;
        }
    }

    for(;i<=n;i++){
        if(v[i]){
            if(v[i]!=x)
                break;
        }
    }
    if(i==(n+1))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

