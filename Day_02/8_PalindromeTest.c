#include<stdio.h>
int main(){
    int n,n1,reverse=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
        reverse=(reverse*10)+n1%10;
        n1/=10;
    }
    if (reverse==n){
        printf("Given number is Palindrome");}

        else printf("Number is not Palindrome");
 return 0;

}