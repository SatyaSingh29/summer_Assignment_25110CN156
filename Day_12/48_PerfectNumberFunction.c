#include<stdio.h>
void perfectnumber(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("Perfect Number");
    }
    else printf("Not Perfect Number");
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    perfectnumber(n);
    
return 0;
}