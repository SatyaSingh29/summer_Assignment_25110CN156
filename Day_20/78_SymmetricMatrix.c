#include <stdio.h>

int main() {
    int r1, c1;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    if(r1 !=c1){
        printf("Enter Square Matrix");
        return 0;
    }

    int A[r1][c1];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            if(A[i][j] != A[j][i]){
                flag=0;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag==0){
        printf("Not Symmetric");
    }
    else printf("Symmetric");

    return 0;
}