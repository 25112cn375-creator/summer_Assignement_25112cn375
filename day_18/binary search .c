// Write a program to Binary search.
#include<stdio.h>
int main(){
    int i ,j,n,temp,arr[100],key,low,high,mid;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    printf("enter the key to be searched");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("element found at position %d",mid+1);
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low>high){
        printf("element not found");
    }
    return 0;
}
