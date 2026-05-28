#include<stdio.h>
int main()
{
  // Write a program to Check perfect number.
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

// Write a program to Check strong number.
int n,sum=0,r,fact=0;
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

// Write a program to Print factors of a number.
 int n,i;
 printf("enter the number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     if(n%i==0)
     {
         printf("%d ",i);
     }
 }

// Write a program to Find largest prime factor.
int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {n=n/i;
            printf("%d.",i);
        
        }
    }
    if (n>2)
    {printf("%d",n);
    }
return 0;
}
