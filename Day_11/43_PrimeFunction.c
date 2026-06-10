#include <stdio.h>
void prime(int n){
    if(n<=1){
        printf("Not Prime");
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            printf("Not Prime");
            return;
        }
    }
    printf("Prime");
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    prime(n);
return 0;
}