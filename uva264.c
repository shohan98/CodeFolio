#include<stdio.h>
#include<math.h>
int main(){
    int term,sum,difference,num;
    float n;
    while(scanf("%i",&term)){
        n=(1+sqrt(1+8*term))/4.0;
        if(n!=(int)n)
            n=(int)n+1;
        num = 2*n-1;
        sum = 2*(n-1)*(n-1)-n+1;
        difference = term-sum;
        if(difference<num)
            printf("TERM %i IS %i/%i\n",term,difference,num-difference);
        else
            printf("TERM %i IS %i/%i\n",term,2*num-difference,difference-num+1);
    }

    return 0;
}
