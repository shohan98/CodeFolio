#include<stdio.h>
int main()
{
    int number1,number2,number3,lcm,big,a=1;
    scanf("%i %i %i",&number1,&number2,&number3);
    if(number1<number2)
        if(number2>number3)
                big=number2;
        else
            big=number3;
    else
        if(number1>number3)
            big=number1;
        else
            big=number3;

    for(lcm=big;lcm % number1!=0 || lcm % number2!=0 || lcm % number3!=0;lcm=big*a)
            a++;

    printf("LCM is %i \n",lcm);
    //================================GCD====================
     int sml=number1;

     if(sml>number2)
        sml=number2;
     else if(sml>number3)
        sml=number3;
     while(number1%sml!=0 || number2%sml!=0|| number3%sml!=0)
        sml--;
     printf("GCD is %i \n",sml);
    return 0;
}
