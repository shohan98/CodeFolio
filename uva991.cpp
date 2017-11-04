#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,m,n,num[15]={1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796};
    scanf("%d",&n);
    printf("%d\n",num[n]);
    while(scanf("%d",&n)==1){
        printf("\n%d\n",num[n]);
    }
    return 0;
}
