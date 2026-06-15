// Write a program to Move zeroes to end.
#include<stdio.h>
int main()
{ 
    int n,i,j;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    j=0;
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
    printf("array after moving zeroes to end:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
