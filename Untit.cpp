#include<stdio.h>
int main(){
    char a[20][20];
    int s,d,f;
    for(s=0;s<3;s++)
        scanf("%s",a[s]);
    for(s=0;s<3;s++)
        printf("%s\n",a[s]);
}
