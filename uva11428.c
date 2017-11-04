#include<stdio.h>

int main(){
    int a,s,d,f,g;
    while(scanf("%i",&a)){
        if(a==0)
            break;
        for(s=1;s*s*s<=a;s++){
            if(s*s*s==a){
                printf("%i 0\n",s);
                s=1;
                break;
            }
        }
        s=s-1;
        for(d=1;d<=s;d++){
            f=a+d*d*d;
            for(g=d+1;g*g*g<=f;g++)
                if(g*g*g==f)
                    break;
            if(g*g*g>f);
            else{
                printf("%i %i\n",g,d);
                break;
            }
        }
        if(d>s && s>0)
            printf("No solution\n");
    }
    return 0;
}
