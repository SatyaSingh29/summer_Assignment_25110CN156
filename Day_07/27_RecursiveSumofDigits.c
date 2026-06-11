#include <stdio.h>
int SumofDigit(int n){
    int sum=0;
    if(n==0){
        return sum;
    }
    return sum=n%10 + SumofDigit(n/10);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    printf("Sum of digits of number is %d",SumofDigit(n));

return 0;
}