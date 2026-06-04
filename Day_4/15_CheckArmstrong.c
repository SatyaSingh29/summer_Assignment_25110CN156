#include <stdio.h>

int main() {
    int n,n1,digit,count=0;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
        n1/=10;
        count+=1;
    }
    n1=n;
    
    while(n1>0){
        digit=n1%10;
        int power=1;
        for(int i=1;i<=count;i++){
            power=power*digit;
        }
        sum+=power;
        n1/=10;
    }
    if(sum==n){
        printf("Armstrong Number");
        
    }
    else
       printf("Not Armstrong Number");
       
    
return 0;


}
