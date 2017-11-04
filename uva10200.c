#include<stdio.h>
int main(){
    int a,s,d,f,g,count;
    float percent,hundred=100.0;
    while(scanf("%i %i",&a,&s)==2){
            count=0;
        for(d=a;d<=s;d++){
            f=d*d+d+41;
            for(g=3;g*g<=f;g+=2){
                if(f%g==0)
                    break;
            }
            if(g*g>f){
                count++;
                printf("%i %i\n",f,count);
            }
        }
        percent=count*hundred/(s-a+1);
        printf("%.2f\n",percent);
    }
    return 0;
}
