// Write a program to Second largest element.
#include<stdio.h>
int main()
{ int n, i, largest,secondlargest;
printf("enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("enter the elements:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
largest=arr[0];
secondlargest=arr[0];
for(i=1;i<n;i++){
    if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
    }
    else if(arr[i]>secondlargest && arr[i]!=largest){
        secondlargest=arr[i];
    }
}
printf("second largest element is %d",secondlargest);
return 0;
}
