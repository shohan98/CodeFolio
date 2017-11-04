#include<bits/stdc++.h>
using namespace std;
int n,m,p=0;
vector<long int> v;

int main(){
    int i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    m=abs(v[1]-v[0]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            k=abs(v[j]-v[i]);
            if(m>k){
                m=k;
                p=1;
            }
            else if(m==k)
                p++;
            if(v[j] != v[j+1])
                break;
        }

    }
    printf("%d %d\n",m,p);
    return 0;
}
