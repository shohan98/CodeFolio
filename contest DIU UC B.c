#include<stdio.h>
int main(){
    long long int a,s,d,f,g,t,ans;
    char c;
    scanf("%lli",&t);
    while(t--){
            ans=0;
            printf("\n");
        while(c!= '='){
            scanf("%lli %c",&a,&c);
            if(c == '+')
                ans=ans+a;
            else if(c == '-')
                ans=ans-a;
            else if(c == '*')
                ans=ans*a;
            else if(c == '/')
                ans=ans/a;

        }
        printf("%lli\n",ans);
    }

}
