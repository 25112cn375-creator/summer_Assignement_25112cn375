// Write a program to Remove duplicates from array.
#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the array after removing duplicates is:");
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
