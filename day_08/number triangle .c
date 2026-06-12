#include<stdio.h>
int main()
{
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
    return 0;
}
