#include <stdio.h>
#include <stdlib.h>

int main()
{
  //All variables
  char name[100];
  float income,expense ;

  //All inputs
  printf("Enter your Name please:");
  scanf("%s",&name);
  printf("Enter your Monthly Income please:");
  scanf("%f",&income);
  printf("Enter your Monthly Expense please:");
  scanf("%f",&expense);

  //calculation of saving
  float saving= income-expense;

  //Displaying all
  printf("\n Name:%s\n",name);
  printf("Monthly Income:%.2f\n",income);
  printf("Monthly Expense:%.2f\n",expense);
  printf("Remaining Saving:%.2f\n",saving);

  //if condition
   if (saving > 0) {
        printf("You are saving money this month.\n");
    } else if (saving == 0) {
        printf("You have no savings this month.\n");
    } else {
        printf("You have overspent this month.\n");
    }


  return 0;
}
