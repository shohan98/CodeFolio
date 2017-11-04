#include<stdio.h>
int main(){
    int i,j,n,ans,lastPOS,pos;
    while(scanf("%i",&n)==1){
        if(!n)
            break;
        lastPOS=0;
        pos=1;
        ans=2;
        j=1;
        if(n&0)
            n/=2;
        else n=(n+1)/2;
        while(n!=2){
            if(n%2==0)
                n/=2;
            else{
                n=n/2;
                n++;
                for(i=lastPOS;i<pos;i++)
                        j=j*2;
                ans+=j;
            }
            pos++;
            printf("%i %i %i %i %i %i\n",n,i,j,ans,pos,lastPOS);

        }
        printf("%i\n",ans);
    }
    return 0;
}
