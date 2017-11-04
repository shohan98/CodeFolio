#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,m,n,start[30],close[30],g;
    string s;
    scanf("%d %d",&n,&k);
    for(i=0;i<30;i++)
        start[i] = close[i] = 0;
    cin>>s;
    if(!start[s[0]-65])
            start[s[0]-65] = 1;
        close[s[0]-65] = 1;
    for(i=1;i<n;i++){

        if(!start[s[i]-65])
            start[s[i]-65] = i+1;
        close[s[i]-65] = i+1;
    }
    g=0;
    for(i=0;i<26;i++){
        g=0;
        for(j=0;j<26;j++){
            if(start[i]>start[j])
                if(start[i]<close[j]){
                    g++;
                }
        }
        g++;
        if(g>k){
            printf("YES\n");
                break;
        }
    }
    if(i == 26)
        printf("NO\n");
    return 0;
}
