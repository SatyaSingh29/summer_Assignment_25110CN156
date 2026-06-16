#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int expectedSum = (n * (n + 1)) / 2;

    int actualSum = 0;
    for(int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    printf("Missing number is: %d\n", missing);

    return 0;
}