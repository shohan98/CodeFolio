#include<stdio.h>
int main(){
    int i,j,k,p,pos,n,target,value,sum,count,key,num[32],ans[32],prev[32][32];

    while(scanf("%i %i",&target,&n),n){
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
        key=1;
        value=1;
        k=1;
        printf("Sums of %i:\n",target);
        for(i=1;i<=n;i++)
            value=value*2;
        p=2;
        k=1;
        for(j=value-1;j>0;j--){
            sum=0;
            pos=0;
            count=n-1;
            for(i=j;i;i/=2,count--){
                if(i&1){
                    sum=sum+num[count];
                    ans[pos]=num[count];
                    pos++;
                }
            }
            if(sum==target){
                for(i=0;i<pos;i++)
                    if(prev[pos][i]!=ans[i])
                        break;
                if(i!=pos){
                    printf("%i",ans[pos-1]);
                    prev[pos][pos-1]=ans[pos-1];
                    for(i=pos-2;i>=0;i--){
                        printf("+%i",ans[i]);
                        prev[pos][i]=ans[i];
                    }
                    printf("\n");
                }
                key=0;
            }
            if(j==(value/p)-1 ){
                if(j!=1);
                else if( num[k]==num[k-1]){
                    j=j-(value/2)/p+1;
                }
                k++;
                p*=2;
            }
        }
        if(key)
            printf("NONE\n");
    }
    return 0;
}
