#include <stdio.h>
int main() {
    int i, j, R=2, C=2, count=0, a[2][2];
    printf("Enter elements of matrix:\n");
    for(i=0; i<R; i++)
        for(j=0; j<C; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<R; i++)
        for(j=0; j<C; j++)
            if(a[i][j] == 0)
                count++;

    if(count > (R*C)/2)
        printf("Sparse matrix\n");
    else
        printf("Not sparse matrix\n");

    return 0;
}
