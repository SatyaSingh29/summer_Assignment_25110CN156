#include<stdio.h>
int Fibonacci(int n){
    if (n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
    
    }
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("%d term of Fibonacci series is %d",n,Fibonacci(n));
return 0;
}