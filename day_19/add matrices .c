// Write a program to Add matrices.
#include<stdio.h>
int main(){
    int i,j,rows,cols;
    printf("enter the number of elements in rows and columns:");
    scanf("%d%d",&rows,&cols);
    int a[rows][cols],b[rows][cols],sum[rows][cols];
    printf("enter the elements of first maatrix:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
printf("enter the elements of second matrix:");
for(i=0;i<rows;i++)
{
    for(j=0;j<cols;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
printf("sum of the maytrices:");
for(i=0;i<rows;i++)
{for(j=0;j<cols;j++)
{ sum[i][j]=a[i][j]+b[i][j];
printf("%d\t",sum[i][j]);
}}
return 0;
}
