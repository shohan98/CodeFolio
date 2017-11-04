#include<stdio.h>
int main(){
    int i,j,n;
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        if(n==1)
            printf("1\n");
        else{
            i=2;
            for(;i<n;i*=2);
            i=i/2;
            i=n-i;
            printf("%d\n",2*i);
        }
    }

    return 0;
}
