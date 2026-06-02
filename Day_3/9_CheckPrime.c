#include<stdio.h>
int main(){
    int n,i,isPrime=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }

    }
    if(isPrime==0){
        printf("%d is not a Prime number",n);
    }
        else printf("%d is a Prime number",n);

return 0;
}