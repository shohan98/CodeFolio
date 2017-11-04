#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,m,n;
    vector<int> v,mex;

// while(1){
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        v.push_back(j);
    }
    for(i=0;i<m;i++){
        scanf("%d",&j);
        for(int ii=0;ii<n;ii++){
            v[ii] = j^v[ii];
        }
        sort(v.begin(),v.end());
        k=0;
        int c = 0;
        for(int ii=0,j=0;ii<=v[n-1];ii++,j++){

            if(ii<v[j]){
                printf("%d\n",ii);
                k=1;
                break;
            }
            c = 0;
            while(v[j+1] == v[j]){
                j++;
            }
        }
        if(!k)
            printf("%d\n",v[n-1]+1);
    }

    //}
    return 0;
}


