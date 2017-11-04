#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,k,l,m,n;

    while(scanf("%ld %ld",&n,&m)== 2){
        int power1 = 1<<m;
        int power2 = power1+1<<m-1;
        j=0;
        k=1;

        n = n%power2;
        for(i=1;i<=n;i++){
           l= j+k;
           j=k;
           k=l%power1;

        }

        printf("%ld\n",j);
    }
    return 0;
}
