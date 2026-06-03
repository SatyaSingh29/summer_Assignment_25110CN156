
#include<stdio.h>
int main(){
    int n1,n2,i,j;
    printf("Enter the starting number: ");
    scanf("%d",&n1);
    printf("Enter the last number: ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                break;
            }
        }
      if(i>1 && j>i/2){
        printf("%d\n",i);}
    }
    return 0;
}
    