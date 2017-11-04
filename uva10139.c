#include<stdio.h>
int main(){
    int n,m,i,k;
    while(scanf("%i %i",&n,&m)){
        if(n>=m)
            printf("%i divides %i!\n",m,n);
        else{
            k=m;
            for(i=2;i<=n;i++){
                if(m%i==0){
                    m=m/i;
                }
                else if(i%m==0){
                    m=1;
                }
                printf(" %i  %i --\n",i,m);
            }

            if(m==1)
                printf("%i divides %i!\n",k,n);
            else
                printf("%i does not divide %i!\n",k,n);
        }
    }
    return 0;
}

