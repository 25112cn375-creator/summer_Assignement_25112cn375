#include<stdio.h>
int main()
{ // Write a program to Input and display array.
int arr[10], i;
    printf("Enter 10 elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: ");
    for(i=0; i<10; i++)
    {
        printf("%d\n ", arr[i]);
    }
    return 0;
}
