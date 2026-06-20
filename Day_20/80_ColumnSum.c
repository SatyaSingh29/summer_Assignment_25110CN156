#include<stdio.h>
int main(){
    int r,c;
    printf("Enter rows and column");
    scanf("%d %d",&r,&c);
    
    int A[r][c];
    printf("Enter elements\n");
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i = 0; i<c; i++){
        int sum = 0;
        for(int j = 0; j<r; j++){
            sum += A[j][i];
        }
        printf("Column %d Sum = %d\n", i + 1, sum);
    }
    return 0;
}