#include<stdio.h>
int main(){
    int n1,n2,i,lcm=1;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    if(n1>=n2){
        for(i=1;i<=10;i++){
            if((n1*i)%n2==0){
                lcm*=n1*i;
                break;
                
            }
        }
        
    }
    if(n2>n1){
        for(i=1;i<=10;i++){
            if((n2*i)%n1==0){
                lcm*=n2*i;
                break;
                
            }
        }
        
    }
    printf("LCM of given two numbers is: %d",lcm);
return 0;
}