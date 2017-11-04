#include<stdlib.h>
int main()
{
    int **ara,num[100];
    int n,k,i,j;
    scanf("%d",&n);

    ara=(int **)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        num[i]=k;
        ara[i]=(int *)malloc(sizeof(int)*k);
        for(j=0;j<k;j++){
            scanf("%d",&ara[i][j]);
        }
    }
       for(i=0;i<n;i++){
        for(j=0;j<num[i];j++){
            printf("%d ",ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}

