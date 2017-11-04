#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100099];
    int arr[100];
    int i,j,k,m,n;
    scanf("%s",s);
    scanf("%d",&k);
    for(i=0;i<99;i++){
        arr[i]=0;
    }
    for(i=0,j=0;s[i];i++){
        if(!arr[s[i]-'a'])
            j++;
        arr[s[i]-'a']=1;
    }

    //printf("hello %d\n",j);
    if(k<=strlen(s)){
        if(j<k)
            printf("%d\n",k-j);
        else
            printf("0\n");
    }
    else
        printf("impossible\n");

    return 0;
}
