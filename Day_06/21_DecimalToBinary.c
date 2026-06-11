#include<stdio.h>
int main(){
    int n,binary=0;
    int place=1;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    
    while(n!=0){
        binary=binary+(n%2)*place;
        place=place*10;
        n/=2;
    }
    printf("Binary conversion: %d",binary);
return 0;
}