#include<stdio.h>
int main(){
    int n,n1,i,digit=0;
    int fact=1,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    n1=n;
    
    while(n1!=0){
        fact=1;
        digit=n1%10;
        for(i=1;i<=digit;i++){
            fact*=i;
        }
        sum+=fact;
        n1/=10;
        
    }
    if(n==0){
        printf("Not Strong Number");
        }
    else {
        if(sum==n){
            printf("Strong Number");
        }
        else printf("Not Strong Number");
        
    }        
            
return 0;
}
