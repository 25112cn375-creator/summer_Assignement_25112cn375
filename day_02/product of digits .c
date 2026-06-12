//7. Write a program to Find product of digits.
#include<stdio.h>
int main()
{int n,product,rem;

printf("enter the  number:");
scanf("%d",&n);
product=1;
while(n>0)
{rem=n%10;
product*=rem;
n=n/10;}
printf("the product of digits is:%d",product);
return 0;
}
