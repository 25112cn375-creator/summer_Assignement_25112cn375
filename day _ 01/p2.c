// write a program to print multiplication table of a given number.

#include<stdio.h>
int main()
{ int n ,i;
    char c='X'; 
printf ("the table of :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{printf("%d%c%d=%d\n",n,c,i,n*i);
}
return 0;
}
