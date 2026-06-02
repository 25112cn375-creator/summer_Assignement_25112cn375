#include<stdio.h>
int main()
{
  // 37.Write a program to Print star pyramid.

    int i,j,n,space;
    printf("enter the no of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for (space = 1; space <= n - i; space++) {
                printf(" ");
        }
        for(j=1; j <= (2 * i - 1);j++)
        {
         printf("*");
        }
        printf("\n");
    }

// 38. Write a program to Print reverse pyramid.

int i,j,n,space;
    printf("enter the no of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {for (space = 1; space <= n - i; space++) {
                printf(" ");
        }
        for(j=1; j <= (2 * i - 1);j++)
        {
         printf("*");
        }
        printf("\n");
    }

// 39. Write a program to Print number pyramid.
 int i,j,n,space;
    printf("enter the no of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for (space = 1; space <= n - i; space++) {
                printf(" ");
        }
        for(j=1; j <= (2 * i - 1);j++)
        {
         printf("%d",j);
        }
        printf("\n");
    }
// 40. Write a program to Print character pyramid.
  
 int i,j,n,space;
    printf("enter the number of rows:");
    scanf("%d",&n);
    space=n-1;
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
