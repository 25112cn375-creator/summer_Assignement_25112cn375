//Write a program to Print Armstrong numbers in a range.
#include<stdio.h>
int main()
{
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
