#include<stdio.h>
int main(){
    int n,maxfreq=0;
    int maxelement;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count>maxfreq){
                maxfreq=count;
                maxelement=arr[i];
            }
        }
    }
    printf("Maximum frequency element: %d",maxelement);
return 0;
    
}