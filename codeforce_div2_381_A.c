#include<stdio.h>
int main(){
    long long int a,b,c,n,i,j,k;
    scanf("%lli %lli %lli %lli",&n,&a,&b,&c);
    n=n%4;
    k=4-n;
    if(k==1){
        printf("%lli\n",a);
    }
    else if(k==2){
        if(2*a<b){
            printf("%lli\n",2*a);
        }
        else
            printf("%lli\n",b);
    }
    else if(k==3){
        if(3*a<c){
            if(3*a<a+b)
                printf("%lli\n",3*a);
            else
                printf("%lli\n",a+b);
        }
        else{
            if(c<a+b)
                printf("%lli\n",c);
            else
                printf("%lli\n",a+b);
        }
    }
    else{
        printf("0\n");
    }
    return 0;
}
