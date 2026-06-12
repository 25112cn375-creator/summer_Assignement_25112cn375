#include<stdio.h>
int main()
{
    //29. Write a program to Print half pyramid pattern. 
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
    return 0;
}
