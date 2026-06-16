#include<stdio.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array after removing duplicates:\n");
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=1;
               continue;
            }
        }
        if(flag==0){
            printf("%d ",arr[i]);
        }
    }
return 0;
    
}