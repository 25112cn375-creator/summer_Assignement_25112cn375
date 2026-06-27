// Write a program to Count words in a sentence.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count=1;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
            count++;
    }
    printf("number of words in the sentence:%d",count);
    return 0;
}
