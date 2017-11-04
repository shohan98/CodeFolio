#include<stdio.h>
int main(){
    long long int i,j,n,sum,count,arr[100009];
    while(scanf("%lli",&n)==1){
        count = 0;
        while(scanf("%lli",&arr[count])==1){

            count++;
        }
        sum=0;
        i=1;
        i=1;
        for(j=1,count--;count>=0;j++){
            sum=sum+(arr[count]*j*i);
            i*=n;
            count--;
        }
        printf("%i\n",sum);
    }
    return 0;
}
