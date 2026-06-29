#include <stdio.h>

#define MAX 100

void createArray(int arr[], int *n)
{
    int i;
    printf("Enter number of elements: ");
    scanf("%d", n);

    printf("Enter %d elements:\n", *n);
    for (i = 0; i < *n; i++)
        scanf("%d", &arr[i]);
}

void displayArray(int arr[], int n)
{
    int i;

    if (n == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int searchElement(int arr[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int findMax(int arr[], int n)
{
    int i, max = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int findMin(int arr[], int n)
{
    int i, min = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    return min;
}

int findSum(int arr[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

double findAverage(int arr[], int n)
{
    return (double)findSum(arr, n) / n;
}

void sortArray(int arr[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array sorted successfully.\n");
}

void insertElement(int arr[], int *n)
{
    int pos, value, i;

    if (*n == MAX)
    {
        printf("Array is full.\n");
        return;
    }

    printf("Enter position (1 to %d): ", *n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > *n + 1)
    {
        printf("Invalid position.\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (i = *n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;
    (*n)++;

    printf("Element inserted successfully.\n");
}

void deleteElement(int arr[], int *n)
{
    int pos, i;

    if (*n == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Enter position to delete (1 to %d): ", *n);
    scanf("%d", &pos);

    if (pos < 1 || pos > *n)
    {
        printf("Invalid position.\n");
        return;
    }

    for (i = pos - 1; i < *n - 1; i++)
        arr[i] = arr[i + 1];

    (*n)--;

    printf("Element deleted successfully.\n");
}

int main()
{
    int arr[MAX];
    int n = 0;
    int choice = 0;
    int key, index;

    while (choice != 11)
    {
        printf("\n----- ARRAY OPERATIONS -----\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Maximum\n");
        printf("5. Find Minimum\n");
        printf("6. Find Sum\n");
        printf("7. Find Average\n");
        printf("8. Sort Array\n");
        printf("9. Insert Element\n");
        printf("10. Delete Element\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                createArray(arr, &n);
                break;

            case 2:
                displayArray(arr, n);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &key);

                index = searchElement(arr, n, key);

                if (index == -1)
                    printf("Element not found.\n");
                else
                    printf("Element found at position %d.\n", index + 1);

                break;

            case 4:
                if (n == 0)
                    printf("Array is empty.\n");
                else
                    printf("Maximum = %d\n", findMax(arr, n));
                break;

            case 5:
                if (n == 0)
                    printf("Array is empty.\n");
                else
                    printf("Minimum = %d\n", findMin(arr, n));
                break;

            case 6:
                printf("Sum = %d\n", findSum(arr, n));
                break;

            case 7:
                if (n == 0)
                    printf("Array is empty.\n");
                else
                    printf("Average = %.2lf\n", findAverage(arr, n));
                break;

            case 8:
                sortArray(arr, n);
                break;

            case 9:
                insertElement(arr, &n);
                break;

            case 10:
                deleteElement(arr, &n);
                break;

            case 11:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}