#include<stdio.h>
int main(){
    double j,k,sum,sumL,sumM,avg,dif,dollar_list[1009];
    int i,num;
    while(scanf("%d",&num)==1){
        if(num==0)
            break;
        sum=0;
        for(i=0;i<num;i++){
            scanf("%lf",&dollar_list[i]);
            sum=sum+dollar_list[i];
        }
        avg=sum/num;
        sumL=0;
        sumM=0;
        dif=0;
        for(i=0;i<num;i++){
            dif=(double)(long)(avg-dollar_list[i]);
            if(dif>0)
                sumL+=dif;
            else
                sumM-=dif;

        }
        if(sumM>sumL)
            printf("%f %.2lf\n",avg,(long)(double)sumM*100/100.0);
        else
            printf("%f %.2lf\n",avg,(long)(double)sumM*100/100.0);
    }
    return 0;
}
