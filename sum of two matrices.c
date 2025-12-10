#include <stdio.h>
int main() {
    int i, j, a[2][2], b[2][2];
    printf("Enter 4 elements for matrix a:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter 4 elements for matrix b:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of matrices:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}
