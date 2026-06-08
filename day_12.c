// 45.Write a program to Write function for palindrome.
#include<stdio.h>
int palindrome(int n)
{ int rev=0,rem,temp;
temp=n;
while(temp!=0)
{ rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(rev==n)
return 1;
else
return 0;
}

//46.Write a program to Write function for Armstrong.
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

// // 47. Write a program to Write function for Fibonacci.
#include<stdio.h>
int fib(int n)
{
    if(n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fib (n-1) + fib (n-2);
    }
}
       int main()
    {
        int a;
        printf("enter the number of terms:");
        scanf("%d",&a);
    
       for (int i=0; i<a; i++)
      {
        printf("%d ", fib(i));
      }
        return 0;
    }

// Q48. Write a program to Write function for perfect number.
#include<stdio.h>
int perfect(int n)
{ int sum =0;
for(int i=1; i<n ;i++)
{
    if(n%i==0)
    { sum+=i;
    }
}
return sum==n;
}
int main()
{ int a;
printf("enter the number:");
scanf("%d",&a);
if(perfect(a))
{
    printf("%d is a perfect number.", a);
}
else
{
    printf("%d is not a perfect number.", a);
}
return 0;
}
