int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    int large=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>large){
            large=arr[i];
        }
        else if(arr[i]<small){
            small=arr[i];
        }
        
    }
    printf("Largest element: %d\n",large);
    printf("Smallest element: %d",small);
    return 0;
}