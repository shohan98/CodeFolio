#include<stdio.h>
int main(){
    int i,j;
    char color1[10],color2[10],color3[10];
    char color[20][20] ={"black","brown","red","orange","yellow","green","blue","violet","gray","white"};
    scanf("%s %s %s",color1,color2,color3);
    for(i=0;i<10;i++){
        if(!strcmp(color1,color[i]))
            printf("%d",i);
    }
    for(i=0;i<10;i++){
        if(!strcmp(color2,color[i]))
            printf("%d",i);
    }
    for(i=0;i<10;i++){
        if(!strcmp(color3,color[i]))
            printf("x10^%d",i);
    }
return 0;
}
