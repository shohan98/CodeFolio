#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,mod,remain;
    char num[1099];
    while(scanf("%s",&num)){
        if(strlen(num) == 1)
            if(num[0] == 48)
                break;
        remain = (num[strlen(num)-1]-48)%11;
        for(i=strlen(num)-2;i>=0;i--){
            remain*=10;
            mod = (remain+num[i]-48)%11;
            remain = mod;
        }
        if(!remain)
            printf("%s is a multiple of 11.\n",num);
        else
            printf("%s is not a multiple of 11.\n",num);

    }
    return 0;
}
