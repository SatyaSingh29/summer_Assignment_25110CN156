#include <stdio.h>
int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int k=0;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i+k;j++){
            if(i>=j){
                char ch='A'+j-1;
                printf("%c",ch);
            }
            else{
                for(int l=k;l>=1;l--){
                    char ch='A'+l-1;
                    printf("%c",ch);
               }
              
            break;
            }
        }
         k++;
        printf("\n");
    }
    return 0;
}