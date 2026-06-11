// 43. Write a program to Write function to check prime.
#include<stdio.h>
int checkPrime(int n) {
    int i, isPrime = 1;
    for(i=2; i<=n/2; i++) {
        if(n%i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = checkPrime(n);
    if(result == 1)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}