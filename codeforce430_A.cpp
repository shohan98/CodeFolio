#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,m,n,ii;
    double k;
    vector<int> v;
  // while(1){
    scanf("%d %d %d %d %lf",&i,&j,&m,&n,&k);
    for(ii=i;ii<=j;ii++)
        if(k>=(ii*1.0/n) && k<=(ii*1.0/m)){
            printf("YES\n");
            break;
        }
    if(ii > j )
        printf("NO\n");
    //}
    return 0;
}
