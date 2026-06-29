#include <stdio.h>
#include <string.h>

void inputString(char str[])
{
    printf("Enter a string: ");
    getchar();  // Clears leftover newline
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void displayString(char str[])
{
    printf("String: %s\n", str);
}

void stringLength(char str[])
{
    printf("Length = %d\n", strlen(str));
}

void copyString(char str[], char copy[])
{
    strcpy(copy, str);
    printf("Copied String: %s\n", copy);
}

void concatenateString(char str[])
{
    char str2[100];

    printf("Enter another string: ");
    getchar();
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str, str2);

    printf("After Concatenation: %s\n", str);
}

void compareString(char str[])
{
    char str2[100];

    printf("Enter another string: ");
    getchar();
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int result = strcmp(str, str2);

    if (result == 0)
        printf("Both strings are equal.\n");
    else if (result > 0)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");
}

void reverseString(char str[])
{
    int i, len = strlen(str);
    char rev[100];

    for (i = 0; i < len; i++)
        rev[i] = str[len - i - 1];

    rev[len] = '\0';

    printf("Reversed String: %s\n", rev);
}

void countVowels(char str[])
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);
}

int main()
{
    char str[100] = "";
    char copy[100];
    int choice = 0;

    while (choice != 9)
    {
        printf("\n----- STRING OPERATIONS -----\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Concatenate String\n");
        printf("6. Compare Strings\n");
        printf("7. Reverse String\n");
        printf("8. Count Vowels\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                inputString(str);
                break;

            case 2:
                displayString(str);
                break;

            case 3:
                stringLength(str);
                break;

            case 4:
                copyString(str, copy);
                break;

            case 5:
                concatenateString(str);
                break;

            case 6:
                compareString(str);
                break;

            case 7:
                reverseString(str);
                break;

            case 8:
                countVowels(str);
                break;

            case 9:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}