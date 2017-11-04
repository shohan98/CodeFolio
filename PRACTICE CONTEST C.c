#include<stdio.h>
int main(){
    int a,s,d,f,g;
    char in[100][100];
    scanf("%i",&a);
    for(s=1;s<=a;s++){
            d=0;
            f=0;
            printf("Case %i:\n",s);
        while(1){
                fflush(stdin);
                printf("  %i %i\n",f,d);
            gets(in[d]);
            if(in[d][0]=='Q'){
                break;
            }
            else if(in[d][0]=='F'){
                f++;
                if(f>=d)
                    printf("Ignored");
                else
                    for(g=6;in[f][g];g++)
                        printf("%c",in[f][g]);
                d++;
            }
            else if(in[d][0]=='B'){
                f-=2;
                if(f<-1)
                        printf("Ignored");
                else if(f==-1)
                      printf("http://www.lightoj.com/");
                else
                    for(g=6;in[f][g];g++)
                        printf("%c",in[f][g]);

                    f++;
            }
            else{
                for(g=6;in[d][g];g++)
                    printf("%c",in[d][g]);

                f++;
                d=f;
            }
            printf("  %i %i",f,d);
            printf("\n");
        }

    }


return 0;
}
