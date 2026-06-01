#include<stdio.h>
int main()
{ // 33. Write a program to Print reverse star pattern.
 int i,j,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
for(i=n;i>=1;i--)
{
    for(j=1;j<=i;j++)
    { printf("*");
    }
    printf("\n");
}

//34. Write a program to Print reverse number triangle.

    int i,j,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
for(i=n;i>=1;i--)
{
    for(j=1;j<=i;j++)
    { printf("%d",j);
    }
    printf("\n");
}

// 35.  Write a program to Print repeated character pattern.
    int i,j,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    { printf("%c",'A'+i-1);
    }
    printf("\n");
}

// 36. Write a program to Print hollow square pattern.
{ int i,n,j;
printf("enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ for(j=1;j<=n;j++)
    { if(i==1||i==n||j==1||j==n)
        { printf("*");
        }
      else
        { printf(" ");
        }
    }
  printf("\n");
}
return 0;
}
