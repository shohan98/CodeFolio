#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,a,b,c,t,i,j,key,Left_hand,Right_hand;
    scanf("%i",&t);
    while(t--){

        scanf("%i %i %i",&a,&b,&c);
        i=sqrt((c-2)/3)+1;
        j=a/2;
        key=0;

        for(x=-i-1;x<=i;x=x+1){
            if(!x)
                continue;
            if(!(b%x)){
                for(y=x+1;y<j;y=y+1){
                    if(!y)
                        continue;
                    if(!(b%y)){
                        z=a-x-y;

                        if(!z || y == z)
                            continue;
                        if(!(b%z))
                            if(x*y*z == b)
                                if(((x*x)+(y*y)+(z*z)) == c){
                                    key=1;
                                    printf("%i %i %i\n",x,y,z);
                                    break;
                                }
                    }
                }
            }

            if(key)
                break;

        }
            if(!key)
                printf("No solution.\n");
    }
    return 0;
}
