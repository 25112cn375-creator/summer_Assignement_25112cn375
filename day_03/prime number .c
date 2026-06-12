// 9. Write a program to Check whether a number is prime.
#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if (num==2)
        {
            printf("the number is prime");
            flag=1;
            break;
        }
        if(num%i==0)
        { printf("the number is not prime");}
        else
    { printf("the number is prime");
    flag=1;}
    }
    if(flag==0)
    {
        printf("the number is prime");
    }
    return 0;
}
