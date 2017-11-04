#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,l,m,n,ans[60];
    char s[5];
    scanf("%d %d",&n,&k);
    for(i=0;i<n-k+1;i++){
        scanf("%s",s);
        if(s == "YES")
            ans[i]=1;
        else
            ans[i]=0;

    }
    j=65;
    printf("%c",j);
    i=1;
    if(ans[0]){
        while(i<k){
            printf(" %c",j);
            j++;
            i++;
        }
    }


    for(;i<n-k+1;i++){

        if(!ans[i])
            printf("%c ",j);
    }

}
