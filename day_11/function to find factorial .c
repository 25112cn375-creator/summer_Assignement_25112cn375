//44.  Write a program to Write function to find factorial.
#include<stdio.h>
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
