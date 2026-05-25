#include<stdio.h>
int main(){
// 1. write a program to find the sum of n natural numbers.
int N,i,sum=0;   
printf("enter the number:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{sum=sum+i;
}
printf("the sum of n natural numbers is %d",sum);

// 2. write a program to print multiplication table of a given number.
 int n ,i;
    char c='X'; 
printf ("the table of :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{printf("%d%c%d=%d\n",n,c,i,n*i);
}

// 3.write a program to find factorial of a given no.

#include<stdio.h>
int main()
{int n,fact=1,i;
    printf("enter the number:");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{fact=fact*i;
}
printf("the factorial of given no. is :%d",fact);

// 4. write a program to count digits of a number.
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
