// Q62.  Write a program to Find maximum frequency element.
# include <stdio.h>
int main()
{
int i,n, j , max=0, count=0, freq;
printf("enter the size ofarray\n");
scanf("%d", &n);
int arr[n];
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
    scanf("%d", &arr[i]);
}
for(i=0;i<n;i++)
{
    count=0;
    for(j=0;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
        }
    }
    if(count>max)
    {
        max=count;
        freq=arr[i];
    }
}
printf("maximum frequency element is %d with frequency %d", freq, max);
return 0;
}
