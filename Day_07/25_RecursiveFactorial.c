#include<stdio.h>
int Factorial(int n){
    int fact=1;
    if(n==0)
      return fact;
    fact=n * Factorial(n-1);
    return fact;
    
}
int main(){
    int n,fact=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact=Factorial(n);
    
    printf("Factorial of %d is %d ",n,fact);
return 0;
}