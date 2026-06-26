#include <stdio.h>

int main()
{
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000.0, amount;

    printf("===== ATM Simulator =====\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("Incorrect PIN! Access Denied.\n");
        return 0;
    }

    printf("\n1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Your Balance: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Deposit Successful!\n");
            printf("Updated Balance: %.2f\n", balance);
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= balance)
            {
                balance = balance - amount;
                printf("Withdrawal Successful!\n");
                printf("Remaining Balance: %.2f\n", balance);
            }
            else
            {
                printf("Insufficient Balance!\n");
            }
            break;

        case 4:
            printf("Thank you for using the ATM.\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}