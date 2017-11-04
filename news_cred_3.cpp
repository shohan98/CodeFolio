#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,t,n,arr[30];
    char c[100000];
    scanf("%i",&n);
    getchar();
    while(n--){
        gets(c);
        for(i=0;i<30;i++)
            arr[i] = 0;
        j = strlen(c);
        for(i=0;i<j;i++){
            arr[c[i]-97] = 1;

        }
        for(i=0;i<26;i++){

            if(!arr[i])
                break;
        }
        if(i == 26)
            printf("1");
        else
            printf("0");

    }
    printf("\n");
return 0;
}
