// Write a program to Rotate array left.
#include<stdio.h>
void rotateleft(int arr[], int n,int d)
{
    int i;
    for(i=0;i<d;i++){
        int temp=arr[0];
        int j;
        for(j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
}
int main()
{ 
    int n,d,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the size of rotation:");
    scanf("%d",&d);
    printf("enter the elemnetsof array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rotateleft(arr,n,d);
    printf("array after left rotation:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
