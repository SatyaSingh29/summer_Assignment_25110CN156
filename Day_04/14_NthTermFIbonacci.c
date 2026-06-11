#include <stdio.h>
int main(){
    int n,i,first=0,second=1,next=0,temp=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    if(n==1){
        printf("%dst term of fibonacci series: %d",1,first);
    }
    if(n==2){
        printf("%dnd term of fibonacci series: %d",2,second);
    }
    while(n>2){
        
        for(i=2;i<n;i++){
            next=first+second;
            first=second;
            second=next;
        }
        if(n==3){
        printf("%drd term of fibonacci series is: %d",3,next);
    }
       else{
            printf("%dth term of fibonacci series is: %d",n,next);
        }  
        break;
        
        
    }
    
           
       
return 0;
    
}