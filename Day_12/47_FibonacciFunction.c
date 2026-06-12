#include <stdio.h>
void fibonacci(int n){
    int i,first=0,second=1,next=0,temp=0;
    if(n==1){
        printf("%d ",first);
    }
    while(n>1){
        printf("%d ",first);
        printf("%d ",second);
        
        for(i=2;i<n;i++){
            next=first+second;
            printf("%d ",next);
            first=second;
            second=next;
        }
         break;
        
    }
}
int main(){
    int n;
    printf("Enter number of terms in fibonacci series: ");
    scanf("%d",&n);
    fibonacci(n);
return 0;
    
}
