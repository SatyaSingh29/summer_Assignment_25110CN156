#include <stdio.h>
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Given array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        
    }
    
    return 0;
}