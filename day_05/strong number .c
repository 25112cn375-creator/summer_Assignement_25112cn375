// Write a program to Check strong number.
#include<stdio.h>
int main()
{ int n,sum=0,r,fact=0;
    printf("enter the number");
    scanf("%d",&n);
    int temp=n;
    while(temp>0)
    {r=temp%10;
    fact=1;
for (int i=1;i<=r;i++)
{fact=fact*i;
}
sum=sum+fact;
temp=temp/10;
}
if(sum==n)
{printf("strong number");
}
else
printf("not a strong number");
return 0;
}
