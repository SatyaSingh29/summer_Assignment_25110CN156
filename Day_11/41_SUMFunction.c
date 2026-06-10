#include <stdio.h>
int Sum(int a,int b){
    return a+b;
    }
    
int main() {
    int n1,n2;
    int sum;
    printf("First Number: ");
    scanf("%d",&n1);
    printf("Second Number: ");
    scanf("%d",&n2);
    
    sum=Sum(n1,n2);
    
    printf("Sum of two numbers is: %d",sum);
    
return 0;
}