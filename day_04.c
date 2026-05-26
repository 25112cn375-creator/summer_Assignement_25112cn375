#include<stdio.h>
int main()
{
// 13. Write a program to Generate Fibonacci series.
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
        next = first + second;
         first = second;
        second = next;
        }
       printf("%d ", next);
    }

// 14. Write a program to Find nth Fibonacci term.
  
    int n, first = 0, second = 1, next, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci term: %d\n", first);
    }
    else if (n == 2) {
        printf("Fibonacci term: %d\n", second);
    }
    else {
        for (i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        printf("Fibonacci term: %d\n", next);
    }

  // 15. Write a program to Check Armstrong number. 

    int num, originalnum , rem ,result;
    printf("enter the number");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0)
    {
        rem = originalnum%10;
        result = result+(rem*rem*rem);
        originalnum=originalnum/10;
    }
    if (result==num)
    {
        printf("the number is an armstrong number");
    }
    else
    {
        printf("the number is not an armstrong number");
    }

// 16. Write a program to Print Armstrong numbers in a range.

 int start, end, num, originalnum, rem, result;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers in the range %d to %d are: ", start, end);
    for(num = start; num <= end; num++)
    {
        originalnum = num;
        result = 0;
        while(originalnum != 0)
        {
            rem = originalnum % 10;
            result = result + (rem * rem * rem);
            originalnum = originalnum / 10;
        }
        if(result == num)
        {
            printf("%d ", num);
        }
    }
    return 0;
}
