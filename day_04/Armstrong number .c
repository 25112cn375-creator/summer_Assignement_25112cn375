# include<stdio.h>
int main()
{
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
return 0;
}
