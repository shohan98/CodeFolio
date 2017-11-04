#include<stdio.h>
int main(){
    int i,j,n,len,k,count,key[110];
    char str[110];
    char filter[] = "ogogo";
    scanf("%i",&len);
    scanf("%s",str);

    for(i=0,j=0,k=0;i<len;i++){
        if(str[i]==filter[j]){

            if(j==2){
                str[i]='*';
                str[i-1]='*';
                str[i-2]='*';
                count=0;
                while(str[i+1]==filter[j+1] && count!=2){

                    if(str[i+2] == filter[j+2] ){

                        key[k]=i+1;
                        key[k+1]=i+2;
                        k+=2;
                        i+=2;

                    }
                    else break;
                    count++;
                }
                j=0;
            }

            else
                j++;

        }
        else
            j=0;
    }
    for(i=0,k=0;i<len;i++){
        if(i==key[k]){
            k++;
            continue;
        }
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}
