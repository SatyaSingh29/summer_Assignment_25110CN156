#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

void displayResult(double result)
{
    if (result == (int)result)
        printf("Result = %d\n", (int)result);
    else
        printf("Result = %.2lf\n", result);
}

int main()
{
    int choice = 0;
    double num1, num2, result;

    while (choice != 5)
    {
        printf("\n----- Operations -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                result = add(num1, num2);
                displayResult(result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                result = subtract(num1, num2);
                displayResult(result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                result = multiply(num1, num2);
                displayResult(result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                if (num2 == 0)
                {
                    printf("Error! Division by zero is not allowed.\n");
                }
                else
                {
                    result = divide(num1, num2);
                    displayResult(result);
                }
                break;

            case 5:
                printf("Exiting Calculator...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}