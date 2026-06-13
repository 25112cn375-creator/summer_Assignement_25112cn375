// Write a program to Find sum and average of array.
#include<stdio.h>
int main()
{
    int arr[5],sum=0,i;
    float avg;
    printf("enter the elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];  
    }
    avg= (float)sum/5;
    printf("sum=%d\n",sum);
    printf("average=%f\n",avg);
  return 0;
}
