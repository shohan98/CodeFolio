#include<stdio.h>
#include<string.h>

int main()
{
    int test,a,len,match,d,f;
    char c,str[90];
    scanf("%i",&test);
    printf("\n");
    while(test--)
    {
        fflush(stdin);
        gets(str);
        printf("\n");
        //puts("");
        len=strlen(str);
        for(match=1; match<=len/2; match++)
        {
            if(len%match==0)
            {
                for(a=0; a<match; a++)
                {
                    for(d=1; d*match<len; d++)
                    {
                        if(str[a]==str[a+d*match]);
                        else break;
                    }
                    if(d*match<len)
                        break;
                }
                if(a==match)
                    break;
            }
        }
        if(match>len/2)
            printf("%i\n",len);
        else
            printf("%i\n",match);

    }
    return 0;
}
