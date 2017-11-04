#include <stdio.h>
#include <stdlib.h>

#define GST 0.05
#define PST 0.08

struct food {
  char *item;
  double price;
  int count;
} menu[] = {
  "Double Cheeseburger", 2.25, 0,
  "Onion Rings", 1.00, 0,
  "Veggie Burger", 2.50, 0,
  "Bottled Drink", .95, 0,
  "Ice Cream Cone", .95, 0,

};

double total(double index)
{
  double price = 0.00;

  price += 100 * index;
  return price;
}

void print_menu(int max)
{
  int i;
  int c = 'A';

  printf("\n\t\t\t\tWelcome to Max's Hamburgers\n\n");
  fprintf(stdout, "%-10s%-10s%-24s%-14s\n",
          "Item", "Count", "ENTREES", "Price");

  for (i = 0; i < max; i++) {
    fprintf(stdout, "%-10c%-10d%-24s%-.2f\n",c + i,
            menu[i].count, menu[i].item, menu[i].price);
  }

  printf("\nSELECT (A-P), R-RESET, - CORRECT, T-TIP, S-DISCOUNT, X-EXIT: ");
  fflush(stdout);
}

void clear_data(int max)
{
  int i;

  for (i = 0; i < max; i++) {
    menu[i].count = 0;
  }
}

int main(void)
{

  int max = sizeof(menu)/sizeof(struct food);
  double sum = 0.00;
  float tippercent = 0.00;
  float discount = 0.00;
  int c;

  print_menu(max);

  while ((c = getchar()) != EOF) {
    switch(c)
      {
      case 'A': case 'B': case 'C': case 'D': case 'E':
        menu[c - 'A'].count++;
        sum += total(menu[c - 'A'].price);
        break;
      case 'R':
        sum = 0.00;
        tippercent = 0.00;
        discount = 0.00;
        clear_data(max);
        break;
      case 'S':
        printf ("ENTER DISCOUNT ");
        fflush(stdout);
        scanf ("%f", &discount);
        break;
      case 'T':
        printf ("ENTER TIP PERCENTAGE ");
        fflush(stdout);
        scanf ("%f", &tippercent);
        break;
      case 'X': case 'x':
        sum = sum + (sum * (tippercent/100));
        printf("**The final total is: %.2f\n", (sum/100) - (discount/100));
        exit(1);
      default:
        print_menu(max);
        break;
      }
  }

  exit(0);
  system("pause");
  return 0;
}
