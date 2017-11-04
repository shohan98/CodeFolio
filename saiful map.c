#include <stdio.h>
#include<stdlib.h>

int main(){
    system("color 2f");
    int choice1,choice2,s;

     printf("\n\n\n\n\t\tD");
     for(s=0;s<100000000;s++);
     system("color f3");
     printf("   I");
     for(s=0;s<100000000;s++);
     system("color f4");
     printf("   S");
     for(s=0;s<100000000;s++);
     system("color f0");
     printf("   T");
     for(s=0;s<100000000;s++);
     system("color f8");
     printf("   A");
     for(s=0;s<100000000;s++);
     system("color f5");
     printf("   N");
     for(s=0;s<100000000;s++);
     system("color 5e");
     printf("   C");
     for(s=0;s<100000000;s++);
     printf("   E");
     for(s=0;s<100000000;s++);
     system("color f8");
     printf("\t   M");
     system("color f8");
     printf("   A");
     for(s=0;s<100000000;s++);
     system("color b0");
     printf("   P");
     for(s=0;s<100000000;s++);
     for(s=0;s<100000000;s++);
    double distance [5][5];
    distance [0][0]= 1;
    distance [0][1]= 16.5;
    distance [0][2]= 20.5;
    distance [0][3]= 30.6;
    distance [0][4]= 70.1;
    distance [1][0]= 16.5;
    distance [1][1]= 1;
    distance [1][2]= 36.7;
    distance [1][3]= 40.7;
    distance [1][4]= 60.7;
    distance [2][0]= 20.5;
    distance [2][1]= 4.00;
    distance [2][2]= 1;
    distance [2][3]= 10.1;
    distance [2][4]= 49.6;
    distance [3][0]= 30.6;
    distance [3][1]= 14.1;
    distance [3][2]= 10.1;
    distance [3][3]= 1;
    distance [3][4]= 39.5;
    distance [4][0]= 70.1;
    distance [4][1]= 53.6;
    distance [4][2]= 49.6;
    distance [4][3]= 39.5;
    distance [4][4]= 1;
    printf("\n================================================================================");
    printf("\n\n\t1. Dhaka\n\t2. khulna\n\t3. comilla\n\t4. Sylhet \n\t5. Chittagong\n\n\tEnter Your Current Place: ");
    scanf("%d", &choice1);
    printf("\n\n\t1. Lalbager kella\n\t2. shat gumbuj mosque\n\t3. moynamoti\n\t4. panthumai \n\t5. patenga\n\n\tEnter Your Target Place: ");
    scanf("%d", &choice2);
    choice1--;
    choice2--;
    printf("\n\t=============================================================\n");
        if (choice1==0&&choice2==0)
        {
            printf("\n\n\tThe distance from Dhaka to Lalbager kella: %.2f\n\n",distance[choice1][choice2]);
        }
        else    if (choice1==0&&choice2==1)
        {
            printf("\n\n\tThe distance from Dhaka to shat gumbuj mosque: %.2f\n\n",distance[choice1][choice2]);
        }
        else    if (choice1==0&&choice2==2)
        {
            printf("\n\n\tThe distance from Dhaka to moynamoti: %.2f\n\n",distance[choice1][choice2]);
        }
        else if (choice1==0&&choice2==3)
        {
            printf("\n\n\tThe distance from Dhaka to panthumai: %.2f\n\n",distance[choice1][choice2]);
        }
        else    if (choice1==0&&choice2==4)
        {
            printf("\n\tThe distance from Dhaka to Patenga: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==1&&choice2==0)
        {
            printf("\n\tThe distance from khulna to Lalbager kella: %.2f\n\n",distance[choice1][choice2]);
        }
        else    if (choice1==1&&choice2==1)
        {
            printf("\n\tThe distance from khulna to hat sgumbuj mosque : %.2f km\n\n",distance[choice1][choice2]);
        }
           else if (choice1==1&&choice2==2)
        {
            printf("\n\tThe distance from khulna to moynamoti:: %.2f km\n\n",distance[choice1][choice2]);
        }
           else if (choice1==1&&choice2==3)
        {
            printf("\n\tThe distance from khulna to panthumai: %.2f\n\n",distance[choice1][choice2]);
        }
        else    if (choice1==1&&choice2==4)
        {
            printf("\n\tThe distance from  Khulna to patenga: %.2f\n\n",distance[choice1][choice2]);
        }
        else    if (choice1==2&&choice2==0)
        {
            printf("\n\tThe distance from comilla to Lalbager kella: %.2f\n\n",distance[choice1][choice2]);
        }
         else   if (choice1==2&&choice2==1)
        {
            printf("\n\tThe distance from comilla to shat gumbuj mosque: %.2f\n\n",distance[choice1][choice2]);
        }
         else   if (choice1==2&&choice2==2)
        {
            printf("\n\tThe distance from comilla to moynamoti:: %.2f\n\n",distance[choice1][choice2]);
        }
         else   if (choice1==2&&choice2==3)
        {
            printf("\n\tThe distance from comilla to panthumai: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==2&&choice2==4)
        {
            printf("\n\tThe distance from comilla to Patenga: %.2f\n\n",distance[choice1][choice2]);
        }
        else    if (choice1==3&&choice2==0)
        {
            printf("\n\tThe distance from sylhet to Lalbager kella: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==3&&choice2==1)
        {
            printf("\n\tThe distance from sylhet to shat gumbuj mosque: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==3&&choice2==2)
        {
            printf("\n\tThe distance from sylhet to moynamoti:: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==3&&choice2==3)
        {
            printf("\n\tThe distance from Sylhet to panthumai: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==3&&choice2==4)
        {
            printf("\n\tThe distance from sylhet to Patenga: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==4&&choice2==0)
        {
            printf("\n\tThe distance from chittagong to Lalbager kella: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==4&&choice2==1)
        {
            printf("\n\tThe distance from chittagong to shat gumbuj mosque: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==4&&choice2==2)
        {
            printf("\n\tThe distance from chittagong to moynamoti:: %.2f\n\n",distance[choice1][choice2]);
        }
          else  if (choice1==4&&choice2==3)
        {
            printf("\n\tThe distance from chittagong to panthumai: %.2f\n\n",distance[choice1][choice2]);
        }
        else if (choice1==4&&choice2==4)
        {
            printf("\n\tThe distance from Chittagong to Patenga: %.2f\n\n",distance[choice1][choice2]);
        }
            else printf("Wrong input !!!");
        printf("\n\t=============================================================\n");
        printf("\nEnter any key for main menu\n");
        getch();
        system("cls");
        main();
    return 0;
}
