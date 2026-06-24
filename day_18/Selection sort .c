// Write a program to Selection sort.
#include<stdio.h>
int main(){
    int i ,j,n,temp,arr[100];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    for(i=0;i<n-1;i++){
        temp=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[temp]){
                temp=j;
            }
        }
        if(temp!=i){
            int t=arr[i];
            arr[i]=arr[temp];
            arr[temp]=t;
        }
    }
    printf("the sorted array is");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
