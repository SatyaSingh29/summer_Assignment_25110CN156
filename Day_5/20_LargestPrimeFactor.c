#include<stdio.h>
int main(){
    int n,i,j,prime;
    int largest=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(i=2;i<=n;i++){
        if(n%i==0){
            prime=1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
            if(prime==1){
                largest=i;
            }
                
            }
        
        }
    printf("Largest Prime Factor: %d",largest);
    return 0;
}