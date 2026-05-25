#include<stdio.h>
int main()
{
  // 9. Write a program to Check whether a number is prime.

    int num,i,flag=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if (num==2)
        {
            printf("the number is prime");
            flag=1;
            break;
        }
        if(num%i==0)
        { printf("the number is not prime");}
        else
    { printf("the number is prime");
    flag=1;}
    }
    if(flag==0)
    {
        printf("the number is prime");
    }

// 10. Write a program to Print prime numbers in a range.
int i,j,n1,n2,count;
printf(" enter the range of number :");
scanf("%d%d",&n1,&n2);
printf("prime numbers between %d and %d are: ",n1,n2);
for(i=n1;i<=n2;i++)
{ count=0;
for(j=2;j<=i/2;j++)
{ if(i%j==0)
{ count++;
break;
}
}
if(count==0)
{ printf("%d ",i);
}
}

//11. Write a program to Find GCD of two numbers.
int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d", a);

// 12. Write a program to Find LCM of two numbers.
  
int a, b, gcd, lcm, temp;
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (num1 * num2) / gcd;
      printf("LCM = %d", lcm);
return 0;
}
