#include<stdio.h>
#include<string.h>
int main()
{
    int a,s,target,f,d=0;
    char ar[10000];
    while(scanf("%i",&a)==1)
    {

        while(a--){
        getchar();
        gets(ar);
        scanf("%i",&target);
        s=strlen(ar);

        if(target==1)
            printf("0 1\n");
        else if(2*target-1 == s)
            printf("0 2 %i %i\n",s,2*target-1);
        else if (ar[2*target-2]<ar[2*target-4])
            printf("0 3 %i %i %i\n",ar[2*target-2]-48,ar[2*target-4]-48,2*target-2);
        else if(ar[2*target-2] < ar[2*target])
            printf("0 4\n");
        else
            printf("%i\n",ar[2*target-2]-48);
            for(f=0;f<2;f++)
                printf("%i",ar[f]-48);

        }
    }
    return 0;
}
