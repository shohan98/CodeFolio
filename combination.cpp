#include<stdio.h>
long long int n,k,target,num[32],com[32],key,count=0;
void combination(int pos,int last){
    int i,j,sum=0;
    if(pos==k){
        count++;

        return;
    }
    for(i=last;i<=n-k+pos;i++){
        com[pos]=num[i];
        combination(pos+1,i+1);
    }

}
int main(){
    long long int i;
    while(scanf("%lli %lli",&n,&k)){
        if(!n)
            break;


        combination(0,0);
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
