#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int len,query,i,start,end,j,k;
    char arr[200009];
    scanf("%d %d",&len,&query);
    scanf("%s",arr);
    for(i=1;i<=query;i++){
        scanf("%d %d",&start,&end);
        sort(arr+start-1,arr+end-1);
        printf("%s\n",arr);
    }
    return 0;
}
