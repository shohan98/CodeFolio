#include<stdio.h>
int N,H,use[20];
void hamming_distance(int count,int pos){
    int i,j,k;
    if(count == (N-H)){
        for(i=0;i<N-1;i++){
            printf("%d",use[i]);
        }
         printf("%d\n",use[N-1]);
        return;
    }
    for(i=pos;i<=H+count;i++){
        if(use[i]){
            use[i]=0;
            hamming_distance(count+1,i);
            use[i]=1;
        }
    }
}
int main(){
    int i,j,k,t,count;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&N,&H);
        if(i)
            printf("\n");
        for(j=0;j<N;j++)
            use[j]=1;
        count=0;
        hamming_distance(count,0);
    }
    return 0;
}
