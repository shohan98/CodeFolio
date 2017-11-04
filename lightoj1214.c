#include<stdio.h>
#include<string.h>
int main(){
    char num[210];
    int i,j,T,length,divisor;
    long long reminder;
    scanf("%i",&T);

    for(i=1;i<=T;i++){
        scanf("%s",num);
        scanf("%i",&divisor);
        reminder = 0;
        j=0;
        length = strlen(num);
        if(num[j] != 45)
            for(j=0;j<length;j++){
                reminder=reminder*10+num[j]-48;
                reminder=reminder%divisor;


            }
        else
            for(j=1;j<length;j++){
                reminder=reminder*10+num[j]-48;
                reminder=reminder%divisor;

            }
        if(!reminder)
            printf("Case %i: divisible\n",i);
        else
            printf("Case %i: not divisible\n",i);

    }
    return 0;
}
