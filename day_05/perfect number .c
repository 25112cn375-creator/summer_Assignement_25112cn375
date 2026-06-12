// Write a program to Check perfect number.
#include<stdio.h>
int main()
{
    int i, num,sum=0;
    printf("enter the no.:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("perfect number");
    }
    else
    {
        printf("not a perfect number");
    }
    return 0;
}
