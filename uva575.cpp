#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,m,k,len;
    char num[101];
    while(scanf("%s",num)){
        if(num[0]==48)
            break;
        len=strlen(num);
        n=0;
        for(i=0;len>0;len--,i++){
            j=i;
            m=2;
            k=2;
            while(j--){
                k*=m;
            }
            n=n+(k-1)*(num[len-1]-48);
        }
        printf("%i\n",n);
    }
    return 0;
}
