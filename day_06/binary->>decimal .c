// Write a program to Convert binary to decimal.
#include<stdio.h>
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

    return 0;
}
