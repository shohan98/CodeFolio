#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,m;
    double arr[10],len;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        for(i=0;i<m;i++){
            scanf("%lf",&arr[i]);
        }
        len=0;
        for(i=0;i<m-1;i++){
            len = len+sqrt(arr[i]*arr[i+1]);
        }
        len*=2;
        len = len+arr[0]+arr[m-1];
        printf("%.3lf\n",len);
    }
    return 0;
}
