#include <stdio.h>
int Reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    return Reverse(n/10, rev*10 + n%10);
}

int main(){
    int n,digit=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    
    printf("Reverse number is %d",Reverse(n,0));

return 0;
}