#include <stdio.h>
int main() {
    int i, j, sum=0, a[2][2];
    printf("Enter elements of array:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<2; i++)
        sum += a[i][i];

    printf("Trace = %d\n", sum);
    return 0;
}
