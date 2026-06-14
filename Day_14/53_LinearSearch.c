#include<stdio.h>
int main(){
    int n,target;
    int flag=0;
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
           printf("Target found at index %d",i);
           flag=1;
            break;
            
        }
        
    }
    if(!flag){
        printf("Not Found");
    }
    
    return 0;
}