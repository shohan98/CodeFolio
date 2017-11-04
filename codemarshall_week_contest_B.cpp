#include<stdio.h>
struct about{
    char name[110];
    int type,mutual;
};
int main(){
    struct about check[110];
    int t,i,j,key=0;
    scanf("%i",&t);
    for(i=0;i<t;i++){
        scanf("%s",check[i].name);
        scanf("%i %i",&check[i].type,&check[i].mutual);
    }
    for(i=0;i<t;i++){
        if(check[i].type || check[i].mutual>=30){
            printf("%s\n",check[i].name);
            key=1;
        }
    }
    if(!key)
        printf("Sorry for being rude!\n");
    return 0;
}
