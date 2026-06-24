// Write a program to Find diagonal sum. 
#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find the sum of diagonal elements
    for(i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("\nThe sum of the diagonal elements = %d\n", sum);

    return 0;
}
