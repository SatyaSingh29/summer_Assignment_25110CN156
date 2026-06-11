#include<stdio.h>
#include<math.h>
int main(){
    int n,decimal=0;
    int power=0;
    int valid=1;
    printf("Enter the binary number: ");
    scanf("%d",&n);
    while(n!=0){
        int digit=n%10;
        if(digit%10!=0 && digit%10!=1){
            valid=0;
            break;
        }
        decimal+=digit * pow(2,power);
        n/=10;
        power+=1;
    }
    if(valid)
       printf("%d",decimal);
    else 
       printf("Enter a Binary Number only");
return 0;
}  
    
    


    