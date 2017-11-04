#include<stdio.h>
int main(){
    int height,down,day;
    float i,up,fatigue_factor_percent,increase;
    while(scanf("%i %f %i %f",&height,&up,&down,&fatigue_factor_percent)){
        if(!height)
            break;
        increase=up*fatigue_factor_percent/100;
        day=0;
        for(i=0;i>=0;up=up-increase){
            if(up<0)
                up=0;
            i=i+up;
            day++;

            if(i>height)
                break;

            i=i-down;
        }
        if(i>height)
            printf("success on day %i\n",day);
        else if(!i)
            printf("failure on day %i\n",++day);
        else
            printf("failure on day %i\n",day);
    }
    return 0;
}
