#include<stdio.h>

int n,k=6,num[32],com[32],key=0;

void combination(int pos,int last){
    int i,j,sum=0;
    if(pos==k){
            for(i=0;i<k-1;i++){
                printf("%i ",com[i]);
            }
            printf("%i\n",com[i]);
        return;
    }
    for(i=last;i<=n-k+pos;i++){
        com[pos]=num[i];
        combination(pos+1,i+1);
    }

}
int main(){
    int i;
    while(scanf("%i",&n)){
        if(!n)
            break;
        if(!key)
            key=1;
        else
            printf("\n");
        for(i=0;i<n;i++)
            scanf("%i",&num[i]);
        combination(0,0);
    }
    return 0;
}

