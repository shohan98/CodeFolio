#include<stdio.h>
int main(){
    int t,i,j,count,ferry_length,car_length,port_total,starboard_total,port[100001],starboard[100001],ans[100001];
    scanf("%i",&t);
    while(t--){
        scanf("%i",&ferry_length);
        ferry_length*=100;
        count=0;
        i=0;
        j=0;
        port_total=0;
        starboard_total=0;
        while(scanf("%i",&car_length)){
            if(!car_length)
                break;

            if(port_total+car_length<=ferry_length){
                port_total+=car_length;
                ans[count]=1;
                count++;
            }
            else if(starboard_total+car_length<=ferry_length){
                starboard_total+=car_length;
                ans[count]=0;
                count++;
            }

        }
        printf("%i\n",count);
        for(i=0;i<=count;i++){
            if(ans[i])
                printf("port\n");
            else
                printf("starboard\n");
        }
        printf("\n");
    }
    return 0;
    }
