#include<stdio.h>
int main(){
    int test,n,a,count;
    scanf("%i",&test);
    for(a=1;a<=test;a++){
            count=0;
        scanf("%i",&n);
        while(n!=0){
            n=n/2;
            count++;
        }
        printf("%i\n",count);
    }
    return 0;
}
