#include<stdio.h>
int main()
{
  // Write a program to Convert decimal to binary. 
int decimal, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
        }
    for (int j = 0; j < i; j++) {
        printf("%d", binary[j]);
    }

// Write a program to Convert binary to decimal.

#include <math.h>

int main() {
   int long  binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal equivalent: %d", decimal);

// Write a program to Count set bits in a number. 
  
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num = num >> 1;
    }

    printf("Number of set bits: %d", count);

    return 0;
}

// Write a program to Find x^n without pow().

#include <stdio.h>

int main() {
    int x, n, result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("%d^%d = %d", x, n, result);

    return 0;
}
