#include <stdio.h>

// Function declarations
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

void displayMenu() {
    printf("\Select the operation\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1/2/3/4): ");
}

int main() {
        int choice;
        float num1, num2, result;

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result:%.2f + %.2f=%.2f\n",num1 ,num2 ,result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Result:%.2f - %.2f= %.2f\n",num1 ,num2 ,result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f X %.2f=%.2f\n",num1 ,num2 ,result);
                break;

            case 4:
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result:%.2f / %.2f= %.2f\n",num1 ,num2 ,result);
                }
                break;

            default:
                printf("Invalid operation.\n");
                break;
        }

    return 0;
}
