#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j;
    char c;
    getchar('a');
    while(scanf("%c\n",&c)){
        i=rand()%10;
        printf("%d\n",i);

    }
    return 0;
}
