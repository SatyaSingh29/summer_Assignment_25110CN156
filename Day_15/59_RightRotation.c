#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size\n");
        return 0;
    }

    int arr[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k for right rotation: ");
    scanf("%d", &k);

    k = k % n;  

    if (k == 0) {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        return 0;
    }

    for (int j = 0; j < k; j++) {
        int temp = arr[n - 1];   

        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;  
    }

    printf("Array after %d right rotations:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}