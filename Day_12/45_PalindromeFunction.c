#include <stdio.h>
void palindrome(int n){
    int n1=n;
    int rev=0;
    while(n1!=0){
        rev=rev*10 + n1%10;
        n1/=10;
    }
    if(rev==n){
        printf("Palindrome");
    }
    else printf("Not Palindrome");
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    palindrome(n);

    return 0;
}