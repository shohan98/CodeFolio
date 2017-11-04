#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    while(scanf("%i",&x)==1){
        if(x==0)
            break;
        y = log2(x);
        printf("%i\n",y);
    }
    return 0;
}
