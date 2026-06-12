// 12. Write a program to Find LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp;
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    // Find GCD using Euclidean Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    // Find LCM
    lcm = (num1 * num2) / gcd;

    // Display LCM
    printf("LCM = %d", lcm);

    return 0;
}
