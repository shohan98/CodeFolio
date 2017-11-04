#include <stdio.h>
int main()
{
    int i,max;
    max=0;
    while(1){
        scanf("%d",&i);

        if(i==-1){
            printf("%d",max);
        }
        if(max<i)
            max=i;
    }
    return 0;
}
