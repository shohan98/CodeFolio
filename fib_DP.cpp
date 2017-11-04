#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if ( !n || n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int i,j,k,n;
    while(scanf("%d",&n)){
        i= fib(n);
        printf("%d\n",i);
    }
    return 0;
}
