#include <stdio.h>

int main() {
    int n1,n2,n,digit,count=0;
    int sum=0;
    printf("Enter starting number: ");
    scanf("%d",&n1);
    printf("Enter last number: ");
    scanf("%d",&n2);
    printf("Armstrong numbers between %d and %d are: ",n1,n2);
    for(int j=n1;j<=n2;j++){
        count=0;
        sum=0;
        n=j;
        while(n>0){
            n/=10;
            count+=1;
            
        }
        n=j;
        
        while(n>0){
            digit=n%10;
            int power=1;
            for(int i=1;i<=count;i++){
                power=power*digit;
                
            }
            sum+=power;
            n/=10;
            
        }
        if(sum==j){
            printf("%d ",j);
        }
        
    }
return 0;
}

