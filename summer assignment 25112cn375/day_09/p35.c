#include<stdio.h>
int main ()
{ // Write a program to Print repeated character pattern.
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
return 0;
 }