#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,m,n;
    unsigned long long cost;
    vector <int> v,c;
    vector< pair<int,int> > p;
    //while(1){
        scanf("%d %d",&n,&k);
        for(i=0;i<=n;i++)
            v.push_back(0);
        for(i=0;i<n;i++){
            scanf("%d",&j);
            p.push_back(make_pair(j,i));

        }
        cost = 0;
        for(i=k+1,j=1;j<=n;i++,j++){
            sort(p.begin(),p.begin()+i);
            cost+=(i-p[i-1].second-1)*p[i-1].first;

            v[p[i-1].second]=i;
            //printf("%d %d \n",cost,p[i-1].first);
            p[i-1].first=0;
        }
        printf("%d\n",cost);
        for(i=0;i<n-1;i++){
            printf("%d ",v[i]);
        }
        printf("%d\n",v[n-1]);
        v.clear();

    //}
    //printf("hello world\n");
    return 0;

}

