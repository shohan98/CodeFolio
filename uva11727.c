#include<stdio.h>
int main(){
    int a,s,d,f,g;
    scanf("%i",&f);
    for(g=1;g<=f;g++){
        scanf("%i %i %i",&a,&s,&d);
        if((a>s && a<d)|| (a<s && a>d))
            printf("Case %i : %i\n",g,a);
        else if((d>s && d<a)|| (d<s && d>a))
            printf("Case %i : %i\n",g,d);
        else
            printf("Case %i : %i\n",g,s);
    }
    return 0;
}
