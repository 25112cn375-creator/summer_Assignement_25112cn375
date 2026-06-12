// Q48 Write a program to Write function for perfect number.
#include<stdio.h>
int perfect(int n)
{ int sum =0;
for(int i=1; i<n ;i++)
{
    if(n%i==0)
    { sum+=i;
    }
}
return sum==n;
}
int main()
{ int a;
printf("enter the number:");
scanf("%d",&a);
if(perfect(a))
{
    printf("%d is a perfect number.", a);
}
else
{
    printf("%d is not a perfect number.", a);
}
return 0;
}
