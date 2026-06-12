//8. Write a program to Check whether a number is palindrome.
#include<stdio.h>
int main()
{
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
