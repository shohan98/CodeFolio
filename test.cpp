#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    char s[110],s2[110];
    int t,l1,l2,j,k;
    scanf("%i",&t);
    getchar();
    for(int i=1;i<=t;i++){
        gets(s);
        gets(s2);

        l1=strlen(s);
        l2=strlen(s2);
        for(j=0;j<=l1 && j<=l2;j++){
            if(s[j]<97 && s[j]!=32)
                s[j]+=32;
            if(s2[j]<97 && s2[j]!=32)
                s2[j]+=32;
        }
        sort(s,s+l1);
        sort(s2,s2+l2);

        for(j=0,k=0;j<=l1 && k<=l2;j++,k++){

            if(s[j]== ' '){
                k--;
            }
            else if(s2[k]==' ')
                j--;
            else if( s[j]!=s2[k])
                break;
        }
        if(j>=l1 && k>=l2)
            printf("Case %i: Yes\n",i);
        else
            printf("Case %i: No\n",i);
    }
    return 0;
}
