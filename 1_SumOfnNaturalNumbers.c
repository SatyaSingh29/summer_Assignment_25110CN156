//Program to Calculate sum of first N natural numbers//
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of natural numbers: ");
    scanf("%d",&n);
    int i=1;

    while(i<=n){
        sum+=i;
        i++;
    } 
    printf("Sum of first n natural numbers is: %d",sum);
return 0;

}