#include<stdio.h>
int main(){
    int n,target;
    int count=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Given array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
       
    }
    printf("Target: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(target==arr[i]){
           count++;
            
        }
        
    }
      printf("Frequency: %d",count);
    return 0;
}