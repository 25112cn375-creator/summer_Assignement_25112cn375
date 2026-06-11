// 46.Write a program to Write function for Armstrong.
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;

    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of each digit raised to the power of the number of digits
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Check if the sum equals the original number
    if (sum == original) {
        return 1; // It's an Armstrong number
    } else {
        return 0; // It's not an Armstrong number
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}