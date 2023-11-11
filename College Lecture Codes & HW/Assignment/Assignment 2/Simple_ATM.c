#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char bank_holder_name[100];
    char account_number[100];
    int initial_balance;

    printf("Enter bank holder name: ");
    gets(bank_holder_name);

    printf("Enter account number: ");
    gets(account_number);

    printf("Enter initial balance: ");
    scanf("%d", &initial_balance);

    int user_input;

    do
    {
        printf("\n\n1 - Deposit Amount\n2 - Withdraw Amount\n3 - Mini Statement\n4 - Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
        {
            int deposit_amount;

            printf("Enter amount to deposit: ");
            scanf("%d", &deposit_amount);

            initial_balance += deposit_amount;

            printf("Current balance: %d", initial_balance);

            break;
        }
        case 2:
        {
            int withdraw_amount;

            printf("Enter amount to withdraw: ");
            scanf("%d", &withdraw_amount);

            initial_balance -= withdraw_amount;

            printf("Current balance: %d", initial_balance);

            break;
        }
        case 3:
        {
            printf("Name: %s\n", bank_holder_name);
            printf("Account Number: %s\n", account_number);
            printf("Current balance: %d", initial_balance);
            getch();
            break;
        }
        case 4:
        {
            printf("Exiting...");

            break;
        }
        default:
        {
            printf("Invalid choice.");
        }
        }
    } while (user_input != 4);

    getch();
}