// Write a program to Check palindrome string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,flag-=0;
    printf("enter the string:");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("palindrome string");
    else
        printf("not a palindrome string");
    return 0;
}
