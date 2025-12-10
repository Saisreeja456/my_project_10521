#include <stdio.h>
int main() {
    int i, j, R, C, a[10][10], transpose[10][10];
    printf("Enter rows and columns: ");
    scanf("%d%d", &R, &C);

    printf("Enter elements:\n");
    for(i=0; i<R; i++)
        for(j=0; j<C; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<R; i++)
        for(j=0; j<C; j++)
            transpose[j][i] = a[i][j];

    printf("Transpose:\n");
    for(i=0; i<C; i++) {
        for(j=0; j<R; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
