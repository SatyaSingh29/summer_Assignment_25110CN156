#include <stdio.h>
#include<math.h>
void armstrong(int n){
    int n1=n;
    int digit=0;
    int result=0;
    while(n1!=0){
        n1/=10;
        digit+=1;
    }
    n1=n;
    while(n1!=0){
        result+=pow(n1%10,digit);
        n1/=10;
    }
    if(result==n){
        printf("Armstrong");
    }
    else printf("Not Armstrong");
    
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    armstrong(n);

    return 0;
}