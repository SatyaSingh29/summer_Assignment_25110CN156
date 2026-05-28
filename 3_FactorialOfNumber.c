//Program to Find Factorial of a number//
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        fact*=i;
        i++;

    }
    printf("Factorial of given number is: %d",fact);
return 0;

}