#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int i,j,k,m,n,t,s,count,limit,l;
    vector<int> v,c;
    scanf("%llu",&t);
    for(i=0;i<t;i++){
        scanf("%llu%llu",&m,&n);
        count=0;
        limit=sqrt(n);

        for(j=0;j<=limit;j++){
            v.push_back(0);
        }
        for(j=4;j<=limit;j+=2){
            v[j]=1;
        }

        l=sqrt(limit);
        for(j=3;j<=l;j++){
            if(!v[j])
                for(k=j*j;k<=limit;k+=j){
                    v[k]=1;
                }
        }
        s=v.size();
        for(j=2;j<s;j++){
            if(!v[j]){
                c.push_back(j);
            }
        }

        s=c.size();
        for(j=0;j<s;j++){
            for(k=c[j]*c[j];k<=n;k*=c[j]){

                if(k>=m)
                    count++;
            }
        }

        printf("%llu\n",count);
        v.clear();
        c.clear();
    }
    return 0;
}

