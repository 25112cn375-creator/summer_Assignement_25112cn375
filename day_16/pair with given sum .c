// Write a program to Find pair with given sum. 
 Write a program to Find pair with given sum. 
#include <stdio.h>
int main(){
    int n,sum;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
printf("enter the elements of array;");
for(int i=0;i<n;i++)
{
    scanf("%d", &arr[i]);
}
printf("enter the sum:");
scanf("%d", &sum);
printf("the pairs with the given sum are:");
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {if(arr[i]+arr[j]==sum)
    {
        printf ("%d %d\n",arr[i], arr[j]);
        }
    }
}
return 0;
}
