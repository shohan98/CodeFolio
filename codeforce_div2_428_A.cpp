#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,m,flag=1,day,extra=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        if((j+extra)>=8){
            k-=8;
            extra = extra + j -8;
        }
        else
            k-=(j+extra);
        if(k<=0 && flag){
            day=i+1;
            flag = 0;
        }


    }
    if(k>0)
        printf("-1\n");
    else
        printf("%d\n",day);
    return 0;
}

