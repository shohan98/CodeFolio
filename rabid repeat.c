#include<stdio.h>
#include<stdlib.h>
#define phoneBook_size 512;

int size;
struct {
    char name[32];
    char num[20];
}PHONEBOOK;
PHONEBOOK pb[phonebook_size];


void AddContact();
void main()
{
    int selection;
   for( ; ; )
    {
        printf("1 - Add contact\n"
               "2 - Remove contact\n"
               "3 - Search contact\n"
               "4 - Display all contacts\n"
               "0 - Exit\n\n"
               "Select an option: ");

        scanf("%d", &selection);

        switch(selection)
        {
            case 1:
                AddContact();
                break;
            case 2:
           //     RemoveContact(&pb);
                break;
            case 3:
            //    SearchContact(&pb);
                break;
            case 4:
              //  DisplayContact(&pb);
                break;
            case 0:
                //printf("Thanks for using...\n");
                return 0;
            default:
                printf("Invalid option selected...\n");
                break;
        }

        printf("\n");
    }
    return 0;
}

void AddContact()
{
    for( ; ; )
    {
        printf("Enter name: ");

        scanf("%32[^\n]", pb[size].name);

        printf("Enter mobile number: ");

        scanf("%32[^\n]", pb[size].num);

        printf("Confirm (Y - yes | N - no | B - back): ");
        FLUSH;
        scanf("%c", &selection);

        switch(selection)
        {
            case 'y':
            case 'Y':
                size++;
                printf("Added contact...\n");
                printf("%s",pb[size].name)
                return;
            case 'n':
            case 'N':
                pb[size].name=NULL;
                pb[size].num=NULL;
                return;
            case 'b':
            case 'B':
                pb[size].name=NULL;
                pb[size].num=NULL;
                printf("No contact added...\n");
                return;
            default:
                printf("Invalid option selected... default to N\n");
                break;
        }

        printf("\n");
    }
}
