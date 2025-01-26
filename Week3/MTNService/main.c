#include <stdio.h>
#include <stdlib.h>

void displayMenu() {
    printf("\n--- MTN Mobile Services ---\n");
    printf("1. Airtime Recharge\n");
    printf("2. Internet Bundle\n");
    printf("3. Mobile Money Transfer\n");
    printf("4. Check Balance\n");
    printf("Input: ");
}

int main() {
    int option;
    float amount;
    float balance = 1000.0;
    char recipient[50];


        displayMenu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter amount : ");
                scanf("%f", &amount);
                printf("Recharge successfull!Your've added RWF %.2f to your phone y\n", amount);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);
                if (amount >= 500) {
                    printf("Internet bundle purchase of %.2f confirmed!\n", amount);
                } else {
                    printf("Data validity: Not sufficient for a valid bundle.\n");
                }
                break;

            case 3:
                printf("Enter recipient's name: ");
                scanf("%s", recipient);
                printf("Enter amount : ");
                scanf("%f", &amount);
                printf("Transfer successfully!You've sent RWF %.2f to %s \n", amount, recipient);
                break;

            case 4:
                printf("Your current balance is RWF %.2f\n", balance);
                break;

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }




    return 0;
}
