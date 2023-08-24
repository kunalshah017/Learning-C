#include <stdio.h>
#include <conio.h>

void main()
{
    float cost_price, selling_price, profit, loss;

    printf("Enter the cost price: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        printf("Profit of : %.2f", profit);
    }
    else if (cost_price > selling_price)
    {
        loss = cost_price - selling_price;
        printf("Loss of : %.2f", loss);
    }
    else
        printf("No profit or loss.");

    getch();
}
