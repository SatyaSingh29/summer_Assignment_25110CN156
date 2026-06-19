#include <stdio.h>

int main() {
    int r1, c1;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    if(r1 !=c1){
        printf("Enter Square matrix");
        return 0;
    }
    
    int A[r1][c1];
    int sum=0;

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if(i == j){
                sum+=A[i][j];
            }
        }
    }
    printf("Sum of diagonal elements: %d",sum);

    return 0;
}