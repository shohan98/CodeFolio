#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,sum=0;
    char s[100005];
    scanf("%d %s",&k,s);
    j = strlen(s);
    for(i=0;i<j;i++){
        sum = sum+s[i]-48;

    }
    if(sum<k){
        sort(s,s+j);
        for(i=0;i<j;i++){
            sum = sum-(s[i]-48)+9;

            if(sum>=k)
                break;
        }
        if(i!=j) i++;
        printf("%d\n",i);
    }
    else
        printf("0\n");

    return 0;
}
