#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p1,p2,i,j=1,k=0,y=0,z=0,c=0,d=0,x=1,a=0,b=0;
    time_t t;
    while(1){
        while(k%2==0&&y==0){
            printf("PLAYER 1:\n");
            printf("_________\n\n");
            printf("Enter any charecter:");
            scanf("%c",&i);
            getchar();
            //srand((unsigned)time_t(&t));
            j=rand()%7;
            while(j==0){
            j=rand()%7;
            }
            printf("Your dice number:%d\n",j);
            if(j==1){
                k++;
                printf("You are on\n\n\n");
            }
            else{
                printf("You have to get '1' first\n\n\n");
            }
            y=1;
        }
//        while(k%2==1&&z==0){
//            k++;
//            printf("PLAYER 2:\n");
//            printf("_________\n\n");
//            printf("Enter any charecter:");
//            scanf("%c",&i);
//            getchar();
//            srand((unsigned)time_t(&t));
//            j=rand()%7;
//            while(j==0){
//            j=rand()%7;
//            }
//            printf("Your dice number:%d\n",j);
//            if(j==1){
//                z=1;
//                d=1;
//                k++;
//                printf("You are on\n\n\n");
//            }
//            else{
//                printf("You have to get '1' first\n\n\n");
//
//            }
//        }
        while(k%2==0){
            k++;
            printf("PLAYER 1:\n");
            printf("_________\n\n");
            printf("Enter any charecter:");
            scanf("%c",&i);
            getchar();
            //srand((unsigned)time_t(&t));
            j=rand()%7;
            while(j==0){
            j=(rand()%7);
            }
            printf("%d\n",j);
            a=a+j;
            printf("Your dice number:%d\n",j);
            if(a==100){
                printf("**\\**Player 1 is the winner**\\**\n\t$^$^$^$^$^$^$^$^$^$^$^$^$^$^$^$\n\t\t*^*^*^*^*^*^*^\n");
                x=0;
                break;
            }
            else if(a>100){
                printf("**\\**Can't be more than 100**\\**\n");
                a=a-j;
            }
            if(a==16){
                printf("**\\**Snake bite you at the number of 16**\\**\n");
                a=7;
            }
            else if(a==54){
                printf("**\\**Snake bite you at the number of 54**\\**\n");
                a=34;
            }
            else if(a==62){
                printf("**\\**Snake bite you at the number of 62**\\**\n");
                a=19;
            }
            else if(a==64){
                printf("**\\**Snake bite you at the number of 64**\\**\n");
                a=60;
            }
            else if(a==87){
                printf("**\\**Snake bite you at the number of 87**\\**\n");
                a=24;
            }
            else if(a==93){
                printf("**\\**Snake bite you at the number of 93**\\**\n");
                a=73;
            }
            else if(a==98){
                printf("**\\**Snake bite you at the number of 98**\\**\n");
                a=79;
            }
            if(a==4){
                printf("**\\**You got a stair at the number of 4**\\**\n");
                a=14;
            }
            else if(a==9){
                printf("**\\**You got a stair at the number of 9**\\**\n");
                a=31;
            }
            else if(a==21){
                printf("**\\**You got a stair at the number of 21**\\**\n");
                a=42;
            }
            else if(a==38){
                printf("**\\**You got a stair at the number of 38**\\**\n");
                a=84;
            }
            else if(a==51){
                printf("**\\**You got a stair at the number of 51**\\**\n");
                a=67;
            }
            else if(a==71){
                printf("You got a stair at the number of 71\n");
                a=91;
            }
            printf("Player 1 position:%d\n\n\n",a);
            if(j==1){
                k++;
                printf("##//PLAYER 1,you got '1'.So its your turn again//##\n\n");
            }
        }
        if(a==100){
            break;
        }
        while(k%2!=0){
            k++;
            printf("PLAYER 2:\n");
            printf("_________\n\n");
            printf("Enter any charecter:");
            scanf("%c",&i);
            getchar();
            //srand((unsigned)time_t(&t));
            j=rand()%7;
            while(j==0){
            j=rand()%7;
            }
            b=b+j;
            printf("Your dice number is:%d\n",j);
            if(b==100){
                printf("**\\**Player 2 is the winner**\\**\n\t$^$^$^$^$^$^$^$^$^$^$^$^$^$^$^$\n\t\t*^*^*^*^*^*^*^\n");
                x=0;
                break;
            }
            else if(b>100){
                printf("**\\**Can't be more than 100**\\**\n");
                b=b-j;
            }
            if(b==16){
                printf("**\\**Snake bite you at the number of 16**\\**\n");
                b=7;
            }
            else if(b==54){
                printf("**\\**Snake bite you at the number of 54**\\**\n");
                b=34;
            }
            else if(b==62){
                printf("**\\**Snake bite you at the number of 62**\\**\n");
                b=19;
            }
            else if(b==64){
                printf("**\\**Snake bite you at the number of 64**\\**\n");
                b=60;
            }
            else if(b==87){
                printf("**\\**Snake bite you at the number of 87**\\**\n");
                b=24;
            }
            else if(b==93){
                printf("**\\**Snake bite you at the number of 93**\\**\n");
                b=73;
            }
            else if(b==98){
                printf("**\\**Snake bite you at the number of 98**\\**\n");
                b=79;
            }
            if(b==4){
                printf("**\\**You got a stair at the number of 4**\\**\n");
                b=14;
            }
            else if(b==9){
                printf("**\\**You got a stair at the number of 9**\\**\n");
                b=31;
            }
            else if(b==21){
                printf("**\\**You got a stair at the number of 21**\\**\n");
                b=42;
            }
            else if(b==38){
                printf("**\\**You got a stair at the number of 38**\\**\n");
                b=84;
            }
            else if(b==51){
                printf("**\\**You got a stair at the number of 51**\\**\n");
                b=67;
            }
            else if(b==71){
                printf("**\\**You got a stair at the number of 71**\\**\n");
                b=91;
            }
            printf("Player 2 position:%d\n\n\n",b);
            if(j==1){
                k++;
                printf("##//PLAYER 2,you got '1'.So its your turn again//##\n\n");
            }
        }
    }
    return 0;
}

