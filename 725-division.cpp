#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int arr[1234]; int ans[1234];
bool taken[1234];
int k=0;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("i.cpp", "rt", stdin);
        freopen("o.txt", "wt", stdout);
    #endif

    long n,k=0;
    string s;
    vector <string> vs;

    while( sf("%ld",&n), n){
        memset(arr,0,sizeof arr);
        if(k>0)puts("");
        for(int i=0; i<n; i++) sf("%d",&arr[i]);
        int m=0;
        k++;

        for(int j=0; j < (1 << n); j++){
            s = ""; m = 0;
            for(int k=0; k<n; k++){
                if(j & (1 << k)){
                    m++; s += (arr[k]+ '0');
                }
            }
            if(m == 6){
                sort(s.begin(), s.end());
                vs.push_back(s);
            }
            memset(ans, 0 ,sizeof ans);
        }
        sort(vs.begin(), vs.end());

        int mm = vs.size();
        for(int i=0; i<mm; i++){
           string sp = vs[i];
           int ssz = sp.size();
           for( int j=0; j<ssz; j++){
                if(j == ssz-1) pf("%d\n",sp[j]-'0');
                else pf("%d ", sp[j]-'0');
           }
        }
    }


    return 0;
}
