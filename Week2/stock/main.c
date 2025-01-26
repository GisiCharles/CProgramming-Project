#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initialize the stock array with quantities for 5 products
    int stock[] = {10, 50, 30, 15, 25};
    int totalStock ;
    int numProducts = sizeof(stock) / sizeof(stock[0]);
    float averageStock;

    // Display the stock quantities
    printf("Stock quantities of products:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("Product %d: %d\n", i + 1, stock[i]);
    }

    // Calculate the total stock
    for (in  t i = 0; i < numProducts; i++) {
        totalStock += stock[i];//totalstock = totalstock + stock
    }

    // Calculate the average stock
    averageStock = (float)totalStock / numProducts;

    // Display the total and average stock
    printf("\nTotal stock: %d\n", totalStock);
    printf("Average stock quantity: %.2f\n", averageStock);
    return 0;
}
