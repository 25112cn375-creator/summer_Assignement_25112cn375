// Write a program to Frequency of an element.
include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int element;
    printf("enter the element to find frequency:");
    scanf("%d",&element);
    for(i=0;i<n;i++){
        if(arr[i]==element){
            count++;
        }
    }
    printf("frequency of %d is %d",element,count);
    return 0;
}
