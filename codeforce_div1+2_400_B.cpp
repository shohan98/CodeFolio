#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,t;
    vector <int> prime;

    scanf("%i",&n);
    for(i=0;i<=2*n+1;i++)
        prime.push_back(0);
    int limit=sqrt(n+1);
    for(i=4;i<=n+1;i+=2)
        prime[i]++;
    for(i=3;i<=(limit+1);i++){
        if(!prime[i]){
            for(j=i+i;j<=n+1;j=j+i){
                if(prime[i]==prime[j])
                    prime[j]++;
            }
        }
    }
    int m=prime[2];
    for (i = 3; i <=n+1; i++){
      if (prime[i] > m)
        {
          m = prime[i];
        }
    }
    printf("%i\n",m+1);
    for(i=2;i<n+1;i++)
        printf("%i ",prime[i]+1);
    printf("%i\n",prime[n+1]+1);
    prime.clear();

    return 0;
}
