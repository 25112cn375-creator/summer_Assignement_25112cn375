// Write a program to Check symmetric matrix. 
#include<stdio.h>
int main()
{ int a[10][10],i,j,r,c,flag=0;
printf("enter the number of rows and elements of the matrix:");
scanf("%d%d",&r,&c);
printf("enter the elements of matrix:");
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{scanf("%d",&a[i][j]);
}}
for(i=0;i<r;i++)
{for(j=0;j<c;j++0
{ 
    if(a[i][j]!=a[j][i])
    {
        flag=1;
        break;
    }
}
if(flag==1)
{
    break;
}
}
if(flag==0)
{
    printf("the matrix is symmetric");
}
else
{
    printf("the matrix is not symmetric");
}
return 0;
}
