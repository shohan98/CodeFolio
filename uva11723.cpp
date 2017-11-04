#include<stdio.h>
int main(){
    int road,number,suf,i,j,count=1;
    while(scanf("%i %i",&road,&number)==2){
        if(!road && !number)
            break;
        if(number>=road)
            printf("Case %i: 0\n",count);
        else{
            road=road-number;
            if(road>number*26)
                printf("Case %i: impossible\n",count);
            else{
                suf=(road/number);
                if(road%number)
                    suf++;
                printf("Case %i: %i\n",count,suf);
            }
        }
        count++;
    }
    return 0;
}
