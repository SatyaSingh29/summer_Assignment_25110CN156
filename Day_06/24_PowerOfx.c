#include<stdio.h>
int main(){
    int x,n,i;
    float ans=1;
    printf("Enter the base: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&n);
    if(n>0){
        for(i=1;i<=n;i++){
            ans*=x;
        }
        
    }
    else if(n<0){
        for(i=1;i<=-n;i++){
            ans*=1.0/x;
        }
    }
    printf("%f",ans);
return 0;
    
    
}
