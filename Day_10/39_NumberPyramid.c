#include <stdio.h>
int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int k=0;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+k;j++){
            if(i>=j){
                printf("%d",j);
            }
            else{
                for(int l=k;l>=1;l--){
                    printf("%d",l);
               }
            break;
            }
        }
         k++;
        printf("\n");
    }
    return 0;
}

