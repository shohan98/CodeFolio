#include<stdio.h>
int main(){

    long long int test,i,j,n,m,count;
    scanf("%lli",&test);
    while(test--){
        scanf("%lli",&n);
        i=n;
        count=0;
        while(1){
            j=0;
            m=i;
            while(m!=0){
                j=j*10;
                j=j+m%10;
                m/=10;
            }
            if(j==i)
                break;
            else{
                i+=j;
                count++;
            }

        }
        printf("%lli %lli\n",count,i);
    }
    return 0;
}
