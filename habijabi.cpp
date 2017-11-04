#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,x,y,n,m,flag=1,c=0,arr[10009][8];
    scanf("%d %d",&n,&m);
    x = 8*n;
    for(i=0;i<m;i++){
        scanf("%d",&flag);
        x -=flag;
        if(flag&1)
            x--;

        y = x%8;
        if(c){
            if(c==1 && (flag==2)){
                x-=2;
                c=0;
            }
            else c=0;
        }
        if(y == 4 ){
            if(flag&1);
            else c=1;

        }


    }
    if(x<0)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}


