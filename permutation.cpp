#include<stdio.h>
int num[32],pos[32],use[32];
void permutation(int per, int n){
    int i;
    if(per==n){
        for(i=0;i<n;i++)
            printf("%i ",pos[i]);
        printf("\n");
        return;
    }

    for(i=0;i<n;i++){
        if(!use[i]){
            use[i]=1;
            pos[per]=num[i];
            permutation(per+1,n);
            use[i]=0;

        }
    }
    return;
}
int main(){
    int i,j,n;
    scanf("%i",&n);
    for(i=0;i<n;i++)
        scanf("%i",&num[i]);
    for(i=0;i<n;i++)
        use[i]=0;
    permutation(0,n);
    return 0;
}
