#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,a,b,T,gcd,lcm;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&gcd,&lcm);
        if((lcm%gcd)!=0)
            printf("-1\n");
        else{
                printf("%d %d\n",gcd,lcm);
        }
    }
    return 0;
}
