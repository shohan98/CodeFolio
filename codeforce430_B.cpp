#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,m,n,r,d,x,y,ri;
    vector<int> v;
   // while(1){
    scanf("%d %d",&r,&d);
    scanf("%d",&n);
    for(i=0,j=0;i<n;i++){
        scanf("%d %d %d",&x,&y,&ri);
        float dis = sqrt(1.0*x*x+1.0*y*y);
        if((dis-ri)>=(r-d))
                if((ri+dis)<=(r))
                    j++;
    }
    printf("%d\n",j);
    //}
    return 0;
}

