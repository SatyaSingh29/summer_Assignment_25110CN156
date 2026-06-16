#include<stdio.h>
int main(){
    int n,sum;
    int count=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sum: ");
    scanf("%d",&sum);
    printf("Given pair:\n");
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    if(count==0){
        printf("No pair found");
    }
    
return 0;
    
}