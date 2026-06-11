#include<stdio.h>
int main(){
    int n,i,binary=0;
    int place=1;
    int setcount=0;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    
    while(n!=0){
        binary=binary+(n%2)*place;
        place=place*10;
        n/=2;
    }
    while(binary!=0){
        if(binary%10==1){
            setcount+=1;
        }
        binary/=10;
    }
    printf("Set Bit count: %d",setcount);
return 0;
}
    
    



