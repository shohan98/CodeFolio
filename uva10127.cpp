#include<bits/stdc++.h>
using namespace std;
int main(){
    long int i,j,k,m,n;

    while(scanf("%ld",&n)==1){
        if(!n){
            printf("0\n");
            continue;
        }
        //i=1;
        j=1;
        k=1%n;
        while(k){

            k*=10;
            k++;
            j++;
            k = k%n;
           // printf("%d\n",k);
        }
        printf("%ld\n",j);
    }
    return 0;
}
