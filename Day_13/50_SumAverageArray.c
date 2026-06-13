#include <stdio.h>
int main() {
    int size,sum=0;
    float avg=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        sum+=arr[i];
        
    }
    avg=sum/size;
    printf("Sum: %d\n",sum);
    printf("Average: %f",avg);
    return 0;
}