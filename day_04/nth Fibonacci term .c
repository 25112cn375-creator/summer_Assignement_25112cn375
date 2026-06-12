#include<stdio.h>
int main()
{
    // 14. Write a program to Find nth Fibonacci term.
{
    int n, first = 0, second = 1, next, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci term: %d\n", first);
    }
    else if (n == 2) {
        printf("Fibonacci term: %d\n", second);
    }
    else {
        for (i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        printf("Fibonacci term: %d\n", next);
    }

    return 0;
}
}
