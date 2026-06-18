#include <stdio.h>

int main() {
    int n, target;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int start = 0, end = n - 1;
    int found = -1;

    while(start<= end) {
        int mid = start + (end-start)/2;

        if(arr[mid] == target) {
            found = mid;
            break;
        }
        else if(target > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if(found != -1)
        printf("Element found at index %d", found);
    else
        printf("Element not found");

    return 0;
}