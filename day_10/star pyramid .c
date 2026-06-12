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
return 0;
}
