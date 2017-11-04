#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,ans,ans1,ans2,power,two_power[20]={1,2,4,8,16,32,64,128,256,512,1024};
    while(scanf("%d",&power),power){
        ans =0;
        ans1=0;
        ans2=0;
        for(i=0;two_power[i]<=power;i++);
        i--;
        ans = i;
        power = power - two_power[i];
        if(power>two_power[i]/2){
            power = two_power[i]-power;
            ans++;
        }
            printf("\t%d %d %d\n",ans,i,power);
           for(;i>=0;i--){
                if(two_power[i]<=power){

                    if((two_power[i]+two_power[i+1])/2>= power){
                        power-=two_power[i];
                    }
                    else{
                        power-=two_power[i];
                        power = two_power[i]-power;
                    }
                    ans++;
                }
           }

        printf("%d\n",ans);
}
    return 0;
}
