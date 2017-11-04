#include<stdio.h>


int main(){
    int i,j,k,tea,count;
    while(scanf("%d",&tea)==1){
        count=0;
        for(i=0;i<5;i++){
            scanf("%d",&j);
            if(j==tea)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
