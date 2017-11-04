#include<stdio.h>
int main(){
    float i,m=0,n=1,o=1;
    while(m <= 2.0001){
        if(m == 0 || (m>1.9 && m <2.0001) || m == 1){
            for(i = 0;i < 3;i++){
                printf("I=%.0f J=%.0f\n",m,n);
                n +=1;
            }
            m += 0.2;
            o += 0.2;
            n = o;
        }
        else
            for(i = 0;i < 3;i++){
                printf("I=%.1f J=%.1f\n",m,n);
                n +=1;
            }
        m += 0.2;
        o += 0.2;
        n = o;
    }
    return 0;
}


