// Write a program to Find row-wise sum.
#include<stdio.h>
int main()
{ int a[10][10],i,j,r,c,sum=0;
printf("enter the number of rows and columns of matrix:");
scanf("%d%d",&r,&c);
printf("enter the elements of matrix:\n");
for(i=0;i<r;i++)
{ 
    for(j=0;j<c;j++)
    { 
        scanf("%d",&a[i][j]);
        sum+=a[i][j];
    }
}
printf(" the sum of each row is:\n");
for (i=0;i<r;i++)
{ sum =0;
for (j=0;j<c;j++)
{ sum += a[i][j];
}
printf("sum of row %d is %d\n",i+1,sum);
}
return 0;
}
