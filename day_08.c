#include<stdio>
int main()
{
  // 29. Write a program to Print half pyramid pattern. 
  int i,j,n;
    printf("enter the number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

// 30. Write a program to Print number triangle.
int i,j,n;
    printf("enter the number of rows:");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
// 31. Write a program to Print character triangle.

int i,j,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
// 32. Write a program to Print repeated-number pattern.
int i,j,n;
    printf("enter the numer of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=i;j++)
    {
        printf("%d",i);
    }
    printf("\n");
    }
    return 0;
}
