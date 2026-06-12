// 40. Write a program to Print character pyramid.
#include<stdio.h>
int main()
{
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
