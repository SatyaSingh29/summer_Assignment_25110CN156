#include<stdio.h>
int main(){
    int n1,n2,i,gcd=1;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    if(n1<=n2){
        for(i=2;i<=n1;i++){
            if(n1%i==0&&n2%i==0){
                gcd=i;
            }
        }
    }
    if(n1>=n2){
        for(i=2;i<=n2;i++){
            if(n1%i==0&&n2%i==0){
                gcd=i;
            }
        }
    }
    printf("GCD of two numbers is: %d",gcd);
    return 0;
}
