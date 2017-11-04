#include <stdio.h>

#define PHONEBOOK_SIZE 512
#define FLUSH fflush(stdin); // fpurge(stdin) for linux

typedef struct
{
    char name[32];
    char mobile[32];
}PHONEBOOK, *PPHONEBOOK;

void AddContact(PHONEBOOK *);
void RemoveContact(PHONEBOOK *);
void SearchContact(PHONEBOOK *);
void DisplayContact(PHONEBOOK *);

char selection;
int size=0;

int main()
{
    PHONEBOOK pb[PHONEBOOK_SIZE];

    int a,s;
    printf("\n\n\n\n\n");
     printf("\n\n\n\n\t \tW");
     for(s=0;s<100000000;s++);
     system("color f3");
     printf("\tE");
     for(s=0;s<100000000;s++);
     system("color f4");
     printf("\tL");
     for(s=0;s<100000000;s++);
     system("color f0");
     printf("\tC");
     for(s=0;s<100000000;s++);
     system("color f8");
     printf("\tO");
     for(s=0;s<100000000;s++);
     system("color f5");
     printf("\tM");
     for(s=0;s<100000000;s++);
     system("color 5e");
     printf("\tE");
     for(s=0;s<500000000;s++);
     system("cls");
    for( ; ; )
    {
        system("color 17");
        printf("\n\n\n\t\t1 - Add contact\n"
               "\t\t2 - Remove contact\n"
               "\t\t3 - Search contact\n"
               "\t\t4 - Display all contacts\n"
               "\t\t5 - Edit contact\n"
               "\t\t0 - Exit\n\n"
               "\t\tSelect an option: ");

        FLUSH;


        switch(getch(selection))
        {
            case '1':
                system("cls");
                AddContact(&pb);

                break;
            case '2':
                system("cls");
                RemoveContact(&pb);

                break;
            case '3':
                system("cls");
                SearchContact(&pb);

                break;
            case '4':
                system("cls");
                DisplayContact(&pb);
            case '5':
                system("cls");
                Edit(&pb);

                break;
            case '0':
                system("cls");
                for(a=0;a<5;a++)
                {
                    system("color f2");
                    printf("\n\n\n \tT");
                    for(s=0;s<100000000;s++);
                    system("color fe");
                    printf("\tH");
                    for(s=0;s<100000000;s++);
                    system("color f7");
                    printf("\tA");
                    for(s=0;s<100000000;s++);
                    system("color f0");
                    printf("\tN");
                    for(s=0;s<100000000;s++);
                    system("color f8");
                    printf("\tK");
                    for(s=0;s<100000000;s++);
                    system("color f5");
                    printf("\tY");
                    for(s=0;s<100000000;s++);
                    system("color fa");
                    printf("\tO");
                    for(s=0;s<100000000;s++);
                    system("color fc");
                    printf("\tU");
                    for(s=0;s<100000000;s++);
                    for(s=0;s<10000000;s++){
                        system("color fe");
                        printf("\n\n\n\t\t\t      |||");
                        printf("\n\t\t\t    \\ ||| /\n\t\t\t      \\_/");
                        printf("\n\t\t\t      | |");
                        for(s=0;s<100000000;s++);
                        system("cls");
                        system("color f0");
                        printf("\n\n\n\t\t\t\t  |||");
                        printf("\n\t\t\t\t\\ ||| /\n\t\t\t\t  \\_/");
                        printf("\n\t\t\t\t  | |");
                        system("cls");
                        for(s=0;s<10000000;s++);
                        system("color f3");
                        printf("\n\n\n\t\t       |||");
                        printf("\n\t\t     \\ ||| /\n\t\t       \\_/");
                        printf("\n\t\t       | |");
                        system("cls");
                    }
                    for(s=0;s<10000000;s++){
                        system("color f6");
                        printf("\n\n\n\t\t\t      |||");
                        printf("\n\t\t\t    \\ ||| /\n\t\t\t      \\_/");
                        printf("\n\t\t\t      | |");
                        for(s=0;s<100000000;s++);
                        system("cls");
                        system("color f2");
                        printf("\n\n\n\t\t\t\t  |||");
                        printf("\n\t\t\t\t\\ ||| /\n\t\t\t\t  \\_/");
                        printf("\n\t\t\t\t  | |");
                        system("cls");
                        for(s=0;s<10000000;s++);
                        system("color f1");
                        printf("\n\n\n\t\t       |||");
                        printf("\n\t\t     \\ ||| /\n\t\t       \\_/");
                        printf("\n\t\t       | |");
                        system("cls");
                    }
                    for(s=0;s<10000000;s++){
                        system("color fb");
                        printf("\n\n\n\t\t\t      |||");
                        printf("\n\t\t\t    \\ ||| /\n\t\t\t      \\_/");
                        printf("\n\t\t\t      | |");
                        for(s=0;s<100000000;s++);
                        system("cls");
                        system("color fc");
                        printf("\n\n\n\t\t\t\t  |||");
                        printf("\n\t\t\t\t\\ ||| /\n\t\t\t\t  \\_/");
                        printf("\n\t\t\t\t  | |");
                        system("cls");
                        for(s=0;s<10000000;s++);
                        system("color f9");
                        printf("\n\n\n\t\t       |||");
                        printf("\n\t\t     \\ ||| /\n\t\t       \\_/");
                        printf("\n\t\t       | |");
                        system("cls");
                    }
                    for(s=0;s<10000000;s++){
                        system("color fd");
                        printf("\n\n\n\t\t\t      |||");
                        printf("\n\t\t\t    \\ ||| /\n\t\t\t      \\_/");
                        printf("\n\t\t\t      | |");
                        for(s=0;s<100000000;s++);
                        system("cls");
                        system("color f2");
                        printf("\n\n\n\t\t\t\t  |||");
                        printf("\n\t\t\t\t\\ ||| /\n\t\t\t\t  \\_/");
                        printf("\n\t\t\t\t  | |");
                        system("cls");
                        for(s=0;s<10000000;s++);
                        system("color f8");
                        printf("\n\n\n\t\t       |||");
                        printf("\n\t\t     \\ ||| /\n\t\t       \\_/");
                        printf("\n\t\t       | |");
                        system("cls");
                    }
                    for(s=0;s<10000000;s++);

                    printf("\n\n\t \tB");
                    for(s=0;s<100000000;s++);
                    system("color 13");
                    printf("\tY");
                    for(s=0;s<100000000;s++);
                    system("color a4");
                    printf("\tE");
                    for(s=0;s<100000000;s++);
                    system("color a0");
                    printf("\tB");
                    for(s=0;s<100000000;s++);
                    system("color 88");
                    printf("\Y");
                    for(s=0;s<100000000;s++);
                    system("color 85");
                    printf("\tE");
                    system("cls");
                }
                return 0;
            default:
                printf("\nInvalid option selected...\n");
                break;
        }

        printf("\n");
    }
    return 0;
}
void Edit(PHONEBOOK *pb)
{

    system("color 2b");
    char name[32 + 1];
    int i;

    for( ; ; )
    {
        printf("\n\n\nEnter name (BK - back): ");
        FLUSH;
        scanf("%32[^\n]", name);

        if((name[0] == 'b' || name[0] == 'B') && (name[1] == 'k' || name[1] == 'K') && name[2] == '\0'){
           system("cls");
           break;
        }

        for(i = 0 ; i < size ; i++)
        {
            if(strstr(strlwr(pb[i].name), strlwr(name)) != 0)
            {
                printf("ID    : %d\n", i+1);
                printf("Name  : %s\n", pb[i].name);
                printf("Mobile: %s\n", pb[i].mobile);
                printf("\n");
                break;
            }
            printf("Enter Name : ");
            gets(pb[i].name);
            printf("Enter mobile No : ");
            gets(strlwr(name));
             printf("Confirm (Y - yes | N - no | B - back): ");
        FLUSH;

        switch(getch())
        {
            case 'y':
            case 'Y':
                size++;
                printf("\nAdded contact...\n");
                printf("\nEnter any key for main menu\n");
                getch();
                system("cls");
                return;

            case 'n':
            case 'N':
                memset(pb[size].name, 0, 32 + 1);
                memset(pb[size].mobile, 0, 32 + 1);
                printf("\nEnter any key for main menu\n");
                getch();
                system("cls");
                break;
            case 'b':
            case 'B':
                memset(pb[size].name, 0, 32 + 1);
                memset(pb[size].mobile, 0, 32 + 1);
                printf("\nNo contact added...\n");
                printf("\nEnter any key for main menu\n");
                getch();
                system("cls");
                return;

            default:
                printf("\nInvalid option selected... default to N\n");
                printf("\nEnter any key for main menu\n");
                getch();
                system("cls");
                return;


        }
        }
        if(i==size)
        {
            printf("\nThere have no data of '%s'",name);
        }

        printf("\n");
    }
}

void AddContact(PHONEBOOK *pb)
{
    system("color 71");
    for( ; ; )
    {
        printf("\n\n\nEnter name: ");
        FLUSH;
        scanf("%32[^\n]", pb[size].name);

        printf("\nEnter mobile number: ");
        FLUSH;
        scanf("%32[^\n]", pb[size].mobile);

        printf("Confirm (Y - yes | N - no | B - back): ");
        FLUSH;

        int menu;
        switch(getch())
        {
            case 'y':
            case 'Y':
                size++;
                printf("\nAdded contact...\n");
                printf("\nEnter any key for main menu\n");
                getch();
                system("cls");
                return;

            case 'n':
            case 'N':
                memset(pb[size].name, 0, 32 + 1);
                memset(pb[size].mobile, 0, 32 + 1);
                printf("\nEnter any key for main menu\n");
                getch();
                system("cls");
                break;
            case 'b':
            case 'B':
                memset(pb[size].name, 0, 32 + 1);
                memset(pb[size].mobile, 0, 32 + 1);
                printf("\nNo contact added...\n");
                printf("\nEnter any key for main menu\n");
                getch();
                system("cls");
                return;

            default:
                printf("\nInvalid option selected... default to N\n");
                printf("\nEnter any key for main menu\n");
                getch();
                system("cls");
                return;


        }

        printf("\n");
    }
}

void RemoveContact(PHONEBOOK *pb)
{
    system("color 0e");
    char name[32 + 1];
    int i, j ,key=0;

    for( ; ; )
    {
        printf("\n\n\nEnter name (BK - back): ");
        FLUSH;
        scanf("%32[^\n]", name);

        if((name[0] == 'b' || name[0] == 'B') && (name[1] == 'k' || name[1] == 'K') && name[2] == '\0')
        {
            system("cls");
            return ;
        }

        for(i = 0 ; i < size ; i++)
        {
            if(strstr(strlwr(pb[i].name), strlwr(name)) != 0)
            {
                printf("\nID    : %d\n", i+1);
                printf("Name  : %s\n", pb[i].name);
                printf("Mobile: %s\n", pb[i].mobile);
                printf("\n");

                printf("Remove contact (Y - yes | N - no | B - back):");
                FLUSH;

                switch(getch())
                {
                    case 'y':
                    case 'Y':
                        printf("\nRemoving contact: %s\n", pb[i].name);
                        for(j = i ; j < size ; j++)
                        {
                            strcpy(pb[j].name, pb[j+1].name);
                            strcpy(pb[j].mobile, pb[j+1].mobile);
                        }
                        memset(pb[size].name, 0, 32 + 1);
                        memset(pb[size].mobile, 0, 32 + 1);
                        size--;
                        i--;
                        printf("\nContact removed...\n");
                        key=1;
                        break;
                    case 'n':
                    case 'N':
                        break;
                    case 'b':
                    case 'B':
                        return;
                    default:
                        printf("\nInvalid option selected... default to N\n");
                        break;
                }
            }
        }
        if (key==0)
            printf("\nWRONG NAME!!!\n");
        printf("\n");
    }
    printf("\n");

}

void SearchContact(PHONEBOOK *pb)
{
    system("color 2b");
    char name[32 + 1];
    int i;

    for( ; ; )
    {
        printf("\n\n\nEnter name (BK - back): ");
        FLUSH;
        scanf("%32[^\n]", name);

        if((name[0] == 'b' || name[0] == 'B') && (name[1] == 'k' || name[1] == 'K') && name[2] == '\0'){
           system("cls");
           break;
        }

        for(i = 0 ; i < size ; i++)
        {
            if(strstr(strlwr(pb[i].name), strlwr(name)) != 0)
            {
                printf("ID    : %d\n", i+1);
                printf("Name  : %s\n", pb[i].name);
                printf("Mobile: %s\n", pb[i].mobile);
                printf("\n");
                break;
            }
        }
        if(i==size)
        {
            printf("\nThere have no data of '%s'",name);
        }

        printf("\n");
    }
}

void DisplayContact(PHONEBOOK *pb)
{
    system("color ec");
    int i;
    char menu;
    for(i = 0 ; i < size ; i++)
    {
        printf("ID    : %d\n", i+1);
        printf("Name  : %s\n", pb[i].name);
        printf("Mobile: %s\n", pb[i].mobile);
        printf("\n");
    }
    printf("\nEnter any key for main menu\n");
    getch();
    system("cls");
}
