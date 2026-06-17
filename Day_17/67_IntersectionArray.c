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

    int result[n1 < n2 ? n1 : n2];
    int k = 0;

    // Intersection logic
    for(int i = 0; i < n1; i++) {

        // check if a[i] exists in b
        int foundInB = 0;
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                foundInB = 1;
                break;
            }
        }

        // check if already in result (avoid duplicates)
        int alreadyInResult = 0;
        for(int j = 0; j < k; j++) {
            if(a[i] == result[j]) {
                alreadyInResult = 1;
                break;
            }
        }

        // if present in both and not already added
        if(foundInB == 1 && alreadyInResult == 0) {
            result[k] = a[i];
            k++;
        }
    }

    printf("Intersection of arrays:\n");
    for(int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}