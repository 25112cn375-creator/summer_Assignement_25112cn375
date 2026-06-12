// 47. Write a program to Write function for Fibonacci.
#include<stdio.h>
int fib(int n)
{
    if(n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fib (n-1) + fib (n-2);
    }
}
       int main()
    {
        int a;
        printf("enter the number of terms:");
        scanf("%d",&a);
    
       for (int i=0; i<a; i++)
      {
        printf("%d ", fib(i));
      }
        return 0;
    }
