#include<stdio.h>
int main(){

// 1. Write a program to Find sum of digits of a number.  
int n,sum,i;
    printf("enter a number");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
printf("the sum of digits is: %d",sum);

// 6. Write a program to Reverse a number.
int n, rev=0,i;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{i=n%10;
rev=rev*10+i;
n=n/10;
}
printf("the reversed number is: %d",rev);

//7.Write a program to Find product of digits.
int n,product,rem;
printf("enter the  number:");
scanf("%d",&n);
product=1;
while(n>0)
{rem=n%10;
product*=rem;
n=n/10;}
printf("the product of digits is:%d",product);

//8.Write a program to Check whether a number is palindrome.
 int n,rev=0,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    { rev=rev*10+n%10;
        n=n/10;
}
printf(" reverse of the number is : %d",rev);
if (temp==rev)
{ printf(" the number is palindrome");
    }
    else
    { printf("the number is not pallidrome");
    }
return 0;
}
