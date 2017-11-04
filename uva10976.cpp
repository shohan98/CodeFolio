#include<stdio.h>
int main(){
    int i,j,x,y,n,count,ans[20010];
    double a,b,c;
    while(scanf("%i",&n)==1){
        j=2*n;
        count=0;
        for(x=n+1;x<=j;x++){
            y=x*n;
            i=x-n;
            if(y%i==0){
                ans[count]=y/i;
                ans[count+1]=x;
                count+=2;
            }
        }
        printf("%i\n",count/2);
        for(i=0;i<count;i+=2){
            printf("1/%i = 1/%i + 1/%i\n",n,ans[i],ans[i+1]);
        }
    }
    return 0;
}
