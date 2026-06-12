// write a program to find the sum of n natural numbers.

#include<stdio.h>
int main(){
int N,i,sum=0;   
printf("enter the number:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{sum=sum+i;
}
printf("the sum of n natural numbers is %d",sum);
return 0;
}
