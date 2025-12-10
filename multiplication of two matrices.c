#include <stdio.h>
int main() {
    int i, j, k, A[2][2], B[2][2], C[2][2];
    printf("Enter elements for matrix A:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements for matrix B:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &B[i][j]);

    for(i=0; i<2; i++)
        for(j=0; j<2; j++) {
            C[i][j] = 0;
            for(k=0; k<2; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Product of matrices:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
