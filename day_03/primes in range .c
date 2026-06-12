// 10. Write a program to Print prime numbers in a range.
# include<stdio.h>
int main()
{ int i,j,n1,n2,count;
printf(" enter the range of number :");
scanf("%d%d",&n1,&n2);
printf("prime numbers between %d and %d are: ",n1,n2);
for(i=n1;i<=n2;i++)
{ count=0;
for(j=2;j<=i/2;j++)
{ if(i%j==0)
{ count++;
break;
}
}
if(count==0)
{ printf("%d ",i);
}
}
return 0;
}
