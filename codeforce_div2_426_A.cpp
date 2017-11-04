#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,m,n,arr[4]={118,60,94,62};
    char s,e;
    scanf("%c %c %d",&s,&e,&n);
    n%=4;
    for(i=0;i<4;i++)
        if(arr[i]==s)
            break;
    j = (n+i)%4;
    k = (i-n);
    if(k<0)
        k = 4+k;
    if(j==k)
        printf("undefined\n");
    else if(arr[j]==e)
        printf("cw\n");
    else if(arr[k] == e)
        printf("ccw\n");
    else
        printf("undefined\n");

    return 0;
}

