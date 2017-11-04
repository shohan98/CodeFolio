#include<stdio.h>
int main(){
    int i,j,k,pos,max,n,target,value,sum,count,key,num[32],ans[32],prev[32];
    while(scanf("%i %i",&target,&n)==2){
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
        value=1;
        for(i=1;i<=n;i++)
            value=value*2;
        max=0;
        key=0;
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
                for(i=pos-1;i>=0;i--)
                    printf("%i ",ans[i]);
                printf("sum:%i\n",sum);
                key=1;
                break;
            }
            else if(sum>max && sum<target){
                    max=sum;
                for(i=pos-1;i>=0;i--){
                        prev[i]=ans[i];
                }
                k=pos;
            }
        }
        if(!key){
            for(i=k-1;i>=0;i--)
                printf("%i ",prev[i]);
            printf("sum:%i\n",max);
        }
    }
    return 0;
}

