#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,length,run=0,key,num=0,arr[30],pos[29],lpos[29];
    char str[55];
    scanf("%s",str);
    for(i=1;i<=26;i++)
        arr[i]=0;
    length=strlen(str);
    for(j=i-2;j>=0;j--){
        if(str[j]!=str[j+1])
            break;
    }
    if(j<0)
        num++;
    else{

    for(i=length-1;i>=0;i--){
        if(!arr[str[i]-96]){
            arr[str[i]-96]=1;
            pos[str[i]-96]=i;
            lpos[str[i]-96]=i;
            printf("3\n");
            num++;
        }
        else{
                    if(lpos[str[i]-96]-pos[str[i]-96] == pos[str[i]-96]-i){
                        printf("4\n");
                        for(j=i+1;j<pos[str[i]-96];j++){
                            if(str[j]==str[j+pos[str[i]-96]-i])
                                printf("%c %c\n",str[j],str[j+pos[str[i]-96]-i]);
                            else break;
                        }
                        if(j==i){
                            printf("1\n");
                            num++;
                        }
                    }
                    else
                        num++;
                    lpos[str[i]-96]=pos[str[i]-96];
                    pos[str[i]-96]=i;


           }

    }
    }
    printf("%d\n",num);
    return 0;
}

