#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long mid,size,i,j,k,m,n,dif;
    vector <unsigned long long> v;
    for(i=1,j=0;i<100000;i+=j){
            v.push_back(i);
        j+=2;
    }
    size=v.size();
    while(scanf("%llu",&n),n){
        for(i=0;i<size;i++)
            if(v[i]>=n){
                k=i;
                break;
            }

        if(v[i]==n)
            printf("%llu %llu\n",i+1,i+1);
        else if(i&1){
            dif=i-(v[i]-n);
            if(i<(v[i]-n)){
                dif=i-1-(n-v[i-1]);
                printf("%llu %llu\n",dif+1,i);
            }
            else{
                printf("%llu %llu\n",dif+1,i+1);
            }
        }
        else{
            dif=i-(v[i]-n);

            if(i<(v[i]-n)){
                dif=i-1-(n-v[i-1]);

                printf("%llu %llu\n",i,dif+1);
            }
            else{
                printf("%llu %llu\n",i+1,dif+1);
            }
        }
    }
    return 0;
}
