#include<stdio.h>
int main(){
    int year,i,j,key;
    scanf("%i",&year);
    key=0;
    while(!key){
        year++;

        j=year%10;
        if(j!=year/1000 && j!= (year/100)%10 && j!= (year/10)%10){
            j=(year/10)%10;
            if(j!=year/1000 && j!= (year/100)%10){
                j=j=(year/100)%10;
                if(j!=year/1000)
                    key=1;
            }
        }
    }
    printf("%i\n",year);
    return 0;
}
