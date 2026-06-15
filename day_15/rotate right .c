// Write a program to Rotate array right.
#include<stdio.h>
void rotateright(int arr[], int n, int d)
{
    int i;
    for(i=0;i<d;i++){
        int temp=arr[n-1];
        int j;
        for(j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
}
int main()
{ int n,i,d;
printf("enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("enter the size of rotation:");
scanf("%d",&d);
printf("enter the elements of array:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
rotateright(arr,n,d);
printf("array after right rotation:");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
