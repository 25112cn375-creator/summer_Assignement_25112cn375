// Write a program to Convert decimal to binary. 
#include <stdio.h>

int main() {
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
    return 0;
}