#include<stdio.h>
int main(){
    int i,j,k,a,b,c,ans;
    while(scanf("%d%d%d%d",&i,&a,&b,&c)){
        if(!a && !b && !c)
            break;
        ans=720;
        if(a>i)
            ans+=((i-a+40)*9);
        else
            ans+=(a-i)*9;
        printf("%d\n",ans);
        if(a>b)
            ans+=((a-b)*9);
        else
            ans+=(b-a+40)*9;
        printf("%d\n",ans);
        if(c>b)
            ans+=((c-b)*9);
        else
            ans+=(c-b+40)*9;
        printf("%d\n",ans);
    }
    return 0;
}
