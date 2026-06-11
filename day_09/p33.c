#include<stdio.h>
int main ()
{ // Write a program to Print reverse star pattern.

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
return 0;
 }