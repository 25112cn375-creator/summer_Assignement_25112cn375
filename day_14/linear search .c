// Write a program to Linear search.
#include<stdio.h>
int main()
{  
    int arr[100], i, n,search, flag=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("element found at position %d",i+1);
    }
    else
    {
        printf("element not found");
    }
    return 0;
}
