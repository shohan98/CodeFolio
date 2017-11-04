#include<stdio.h>
int main(){
    int a,s,d,f,g,t,sum,max;
    scanf("%i",&t);
    for(a=1;a<=t;a++){
            sum=0;
            max=0;
        scanf("%i",&s);
        for(d=0;d<s-1;d++){
            scanf("%i %i",&f,&g);
            sum=sum+f-g;
            if(max<sum)
                max=sum;
        }
        printf("Case %i: %i\n",a,max);
    }
    return 0;
}
