// write a program to count digits of a number.

#include<stdio.h>
int main()
{ int num,count;
printf("enter a number:");
scanf("%d",&num);
count=0;
while(num!=0)
{num=num/10;
count++;
}
printf("the number of digits are :%d",count);
return 0;}
