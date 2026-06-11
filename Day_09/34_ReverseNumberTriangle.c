#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int digit=1;
        for(int j=i;j<=n;j++){
            printf("%d",digit);
            digit++;
        }
        printf("\n");
    }
    return 0;
}