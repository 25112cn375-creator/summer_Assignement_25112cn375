// 52. Write a program to Count even and odd elements.
#include<stdio.h>
int main()
{ 
    int n,i,a[100],even=0,odd=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("number of even elements is %d\n",even);
    printf("number of odd elements is %d\n",odd);
    return 0;
}
