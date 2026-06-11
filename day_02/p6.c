// 6.Write a program to Reverse a number.
#include<stdio.h>
int main()
{ int n, rev=0,i;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{i=n%10;
rev=rev*10+i;
n=n/10;
}
printf("the reversed number is: %d",rev);
return 0;
}