#include<stdio.h>
int main()
{
    int a,s,d,f;
    char ar[1234];
    while(scanf("%i",&a)==1)
    {
        while(a--){
        getchar();
        gets(ar);
        d=strlen(ar);

        for(s=0;s<d;s++)
        {
            if(ar[s]-48==0 || ar[s]-48==1){
                if(ar[s]-48==1){
                    for(f=0;f<s-1;f++)
                        printf("%c",ar[f]);
                        break;
                }
                else if(ar[s]-48==0){
                        printf("%i\n",ar[s+2]-48);
                    if(ar[s+2]-48==1)
                        if((s+3)!=d-1 && (s+4)!=d){
                            printf("dhukce\n");
                            for(f=0;f<s-2;f++)
                            printf("%c",ar[f]);
                            break;
                            }
                    else{if(ar[s+2]-48>2 && (ar[s+3]-48>=0 || ar[s+3]<=9)){
                    for(f=0;f<s-2;f++){
                        printf("%c",ar[f]);
                        break;
                    }
                    }
                    }
                }
            }
        }
        }
    }
}
