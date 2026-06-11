//Program to Count digits in a number//
#include<stdio.h>
int main(){
    int n,n1,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    n1=n;
    while(n1!=0){
        n1/=10;
        count+=1;

    }
    printf("Number of digits in given number: %d",count);
return 0;

}