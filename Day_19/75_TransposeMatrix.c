#include <stdio.h>

int main() {
    int r1, c1;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int A[r1][c1];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Transpose Matrix:\n");
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }

    return 0;
}