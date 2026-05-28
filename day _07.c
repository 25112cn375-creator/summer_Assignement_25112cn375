#include<stdio.h>
  // Write a program to Recursive factorial.
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d", num, factorial(num));

// Write a program to Recursive Fibonacci.

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
return 0;
}

// Write a program to Recursive sum of digits.

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumOfDigits(num));

    return 0;
}

// Write a program to Recursive reverse number.

int reverse = 0;

// Function to reverse number recursively
int reverseNumber(int n) {
    if (n == 0)
        return reverse;

    reverse = reverse * 10 + n % 10;
    reverseNumber(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d", reverseNumber(num));

    return 0;
}
