#include <stdio.h>
#include <string.h>
char input[10000];
int finder(char *a)
{
    int len = strlen(a), l, v, i, j;
    char q[100];

    for (l=1 ; l<=(len/2) ; l++)
    {
        for (i=0 ; i<l ; i++)
        {
            q[i]=a[i];
        }
        q[i]='\0';
        v=1;
        for (i=0 ; i<len && v ; i+=l)
        {
            for (j=0 ; j<l && v ; j++)
            {
                if (q[j]!=a[i+j]) v=0;
            }
        }
        if (v) return l;
    }
    return len;

}
int main()
{
    int test, kase=1;
    scanf("%d",&test);
    getchar();
    while (test--)
    {
        gets(input);
        gets(input);
        if (kase++>1) printf("\n");
        printf("%d\n",finder(input));

    }
    return 0;
}
