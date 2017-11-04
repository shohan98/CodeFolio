#include<bits/stdc++.h>
int main(){
    int i,j,len,wid,he,test;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d %d %d",&len,&wid,&he);
        if(len>20 || wid>20 || he>20)
            printf("Case %d: bad\n",i);
        else
            printf("Case %d: good\n",i);
    }
    return 0;
}
