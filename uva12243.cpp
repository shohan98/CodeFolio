#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l;
    char str[2000];
    while(gets(str)){
        if(str[0] == '*')
            break;
        l = strlen(str);
        char  c = str[0];
        for(i=0;i<l;i++){
            if(str[i]== ' '){
               // printf("%d %c %c %c %c\n",i+1,c,str[i+1],str[i+1]+32,str[i+1]-32);
                if(str[i+1]== c || str[i+1]+32==c || str[i+1]-32 == c)
                    i++;
                else break;
            }
        }
        if(i==l)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
