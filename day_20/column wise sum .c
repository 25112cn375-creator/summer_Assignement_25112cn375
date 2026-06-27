// Write a program to Find column-wise sum.
 #include<stdio.h>
 int main()
  { 
    int a[10][10],i,j,r,c,sum=0;
    printf("enter the number of rows and columns of matrix:");
    scanf("%d",&r,&c);
    printf("enter the number of elements in matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("column-wise sum:\n");
    for(j=0;j<c;j++)
    {
        sum=0;
        for(i=0;i<r;i++)
        {
            sum+=a[i][j];
        }
        printf("%d ",sum);
    }
    return 0;
  }
