#include<stdio.h>
#include<string.h>
int main(){
    int d=1,f;
    char a,s[10];
    scanf("%s",s);
    while(s[0]!= '*' ){

        if(strcmp(s,"Umrah")==0)
            printf("Case %i: Hajj-e-Asghar\n",d);
        else printf("Case %i: Hajj-e-Akbar\n",d);
        d++;
    scanf("%s",s);
    }
    return 0;
}
