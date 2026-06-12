# include<stdio.h>
int main()
{
    // to find sum of digits of a number.
    int n,sum,i;
    printf("enter a number");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
printf("the sum of digits is: %d",sum);
return 0;

}
