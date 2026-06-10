#include <stdio.h>
int max(int a,int b){
    return (a>b)?a:b;
    }
    
int main() {
    int n1,n2;
    printf("First Number: ");
    scanf("%d",&n1);
    printf("Second Number: ");
    scanf("%d",&n2);
    
    printf("Maximum of two numbers is:%d",max(n1,n2));
    
return 0;
}
