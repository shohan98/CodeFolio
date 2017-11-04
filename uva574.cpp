#include<stdio.h>
int n,k,target,num[32],com[32],key,prev[32];
void combination(int pos,int last){
    int i,j,sum=0;
    if(pos==k){
        for(i=0;i<k;i++)
            sum=sum + com[i];
        if(sum==target){
            key=1;
            for(i=0;i<k;i++){
                if(prev[i]!=com[i])
                    break;
            }
            if(i==k)
                return;
            for(i=0;i<k;i++){
                if(i)
                    printf("+");
                printf("%i",com[i]);
                prev[i]=com[i];
            }
            printf("\n");
        }
        return;
    }
    for(i=last;i<=n-k+pos;i++){

        com[pos]=num[i];
        combination(pos+1,i+1);
    }

}
int main(){
    int i;
    while(scanf("%i %i",&target,&n),n){
        for(i=0;i<n;i++){
            scanf("%i",&num[i]);

            prev[i]=0;
        }
        printf("Sums of %i:\n",target);
        key=0;
        for(k=1;k<=n;k++){
                combination(0,0);
        }
        if(!key)
            printf("NONE\n");
    }
    return 0;
}

