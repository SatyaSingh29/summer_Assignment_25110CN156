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
    int evencount=0;
    int oddcount=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evencount+=1;
        }
        else oddcount+=1;
        
    }
    printf("even count: %d\n",evencount);
    printf("odd count: %d",oddcount);
    return 0;
}