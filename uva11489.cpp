#include<bits/stdc++.h>
int main(){
    int i,j,k,t,sum,mov,cnt,check[10];
    char num[1010];
    bool flag = true;
    scanf("%d",&t);

    memset(check,0,sizeof(check));
    for(i=1;i<=t;i++){
        scanf("%s",num);
        sum = 0;
        mov = 0;
        cnt=0;
        for(j=0;num[j];j++){
            sum+=num[j]-48;
            if((num[j]-48)%3==0)
                cnt++;
        }
        int mod = sum%3;

        if(sum%3 == 0){
            mov = cnt%2;
        }
        else{

            for(int k=0;num[k];k++)
                if((num[k]-48)%3 == mod){
                    cnt++;
                    break;
                }
            mov = cnt%2;
        }

        if(mov || strlen(num)==1)
            printf("Case %d: S\n",i);
        else
            printf("Case %d: T\n",i);
    }

    return 0;
}
