// 41.  WAP  to find sum of two numbers using function.
#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    result = sum(x, y);
    printf("Sum = %d", result);
    return 0;
}

// 42. Write a program to Write function to find maximum.
int max(int a, int b)
{
    if (a>b)
    return a;
    else
    return b;
}
int main ()
{
    int x,y,result;
    printf("enter the two numbers:");
    scanf("%d%d", &x, &y);
    result = max(x, y);

// 43. Write a program to Write function to check prime.
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

//44. Write a program to Write function to find factorial.
int factorial(int n)
{ if (n==0)
return 1;
else
return n*factorial(n-1);
}
int main()
{
    int n,result;
    printf("enter a number:");
    scanf("%d", &n);
    result=factorial(n);

    printf("Factorial =%d", result);
    return 0;
}
    printf("Maximum = %d", result);

