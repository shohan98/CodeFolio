#include<stdio.h>
#include<string.h>
#include<string>
int main(){
    int i,j,len,num;
    string str[10];
    while(scanf("%s",str)){
            num=0;
            len=strlen(str);
        if(str[0]>48 && str[0]<58){

            for(i=len-1,j=1;i>=0;i--,j*=10){
                num=num+(str[i]-48)*j;

            }

            while(num>0){
                if(num>=1000){
                    num=num-1000;
                    printf("M");
                }
                else if(num>=900){
                    num=num-900;
                    printf("CM");
                }
                else if(num>=500){
                    num=num-500;
                    printf("D");
                }
                else if(num>=400){
                    num=num-400;
                    printf("CD");
                }
                else if(num>=100){
                    num=num-100;
                    printf("C");
                }
                else if(num>=90){
                    num=num-90;
                    printf("XC");
                }
                else if(num>=50){
                    num=num-50;
                    printf("L");
                }
                else if(num>=40){
                    num=num-40;
                    printf("XL");
                }
                else if(num>=10){
                    num=num-10;
                    printf("X");
                }
                else if(num==9){
                    num=num-9;
                    printf("IX");
                }
                else if(num>=5){
                    num=num-5;
                    printf("V");
                }
                else if(num==4){
                    num=num-4;
                    printf("IV");
                }
                else{
                    num=num-1;
                    printf("I");
                }
            }


        }
        else{
            for(i=0;i<len;i++){
                if(str[i]== 'M'){
                    num+=1000;
                }
                else if(str[i]== 'D'){
                    num+=500;
                }
                else if(str[i]== 'C'){
                    if(str[i+1]=='D'){
                        num+=400;
                        i++;
                    }
                    else if(str[i+1] == 'M'){
                        num+=900;
                        i++;
                    }
                    else{
                        num+=100;
                    }
                }
                else if(str[i]== 'L'){
                    num+=50;
                }
                else if(str[i]== 'X'){
                    if(str[i+1]=='L'){
                        num+=40;
                        i++;
                    }
                    else if(str[i+1] == 'C'){
                        num+=90;
                        i++;
                    }
                    else{
                        num+=10;
                    }
                }
                else if(str[i]== 'V'){
                        num+=5;

                }
                else if(str[i]== 'I'){
                    if(str[i+1]=='V'){
                        num+=4;
                        i++;
                    }
                    else if(str[i+1] == 'X'){
                        num+=9;
                        i++;
                    }
                    else{
                        num+=1;
                    }
                }
            }
            printf("%i",num);
        }
        printf("\n");

    }
    return 0;
}
