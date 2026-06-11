//Write a program to Find largest prime factor.
#include<stdio.h>
int main()
{int n,i;
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