#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    vector <int> v;
    while(scanf("%d",&n),n){
        j=0;
        int m=n;
        while(n){
            int mod = n%2;
            v.push_back(mod);
            if(mod)
                 j++;
            n/=2;
             //printf("%d (mod2)\n ",j);
        }
        int len = v.size();
        printf("The parity of ");
        for(i=len-1;i>=0;i--)
            printf("%d",v[i]);
        v.clear();
        printf(" is %d (mod 2).\n",j);
    }
    return 0;
}
