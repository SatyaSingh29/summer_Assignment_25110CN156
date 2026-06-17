#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];
    printf("Enter elements of first array:\n");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];
    printf("Enter elements of second array:\n");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int result[n1 + n2];
    int k = 0;

    // Insert from first array (avoid duplicates)
    for(int i = 0; i < n1; i++) {
        int found = 0;

        for(int j = 0; j < k; j++) {
            if(a[i] == result[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            result[k] = a[i];
            k++;
        }
    }

    // Insert from second array (avoid duplicates)
    for(int i = 0; i < n2; i++) {
        int found = 0;

        for(int j = 0; j < k; j++) {
            if(b[i] == result[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            result[k] = b[i];
            k++;
        }
    }

    printf("Union of arrays:\n");
    for(int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}