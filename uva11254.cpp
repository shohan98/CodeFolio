#include<stdio.h>
#include<math.h>
int main(){
    long long int i,j,s,x,y,n,num,key,prevX;
    while(scanf("%lli",&num)==1){
        if(num==-1)
            break;
        n = sqrt(2*num);
        key = 0;
        while(n>0){

            x = (((2*num)/n)-n+1)/2;
            y = n+x-1;
            j=((y-x+1)*(x+y))/2;
            if(j==num){
                printf("%lli = %lli + ... + %lli\n",num,x,y);
                key=1;
                break;
            }

            n--;
        }
        if(!key)
            printf("%lli = %lli + ... + %lli\n",num,num,num);
    }
    return 0;
}
