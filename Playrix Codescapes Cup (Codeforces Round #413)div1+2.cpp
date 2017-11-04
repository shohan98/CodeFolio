#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,t,d;
    scanf("%d %d %d %d",&n,&t,&k,&d);
    i=d/t;
    n=n-(i*k);
    if(n>k)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
