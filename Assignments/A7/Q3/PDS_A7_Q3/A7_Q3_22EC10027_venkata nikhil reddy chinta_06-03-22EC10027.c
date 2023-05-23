/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 6
* Description : finding weather the string is palindrome or not and anagrams.
*question : 3
*/
#include<stdio.h>
int length(char str1[])
{
    int i,count=0;
    for(i=0;str1[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
/*int main()
{
    char str[20]="smileplease";
    int i;
    i=length(str);
    printf("the length of the string is :%d" , i);
    return 0;
}*/

int palindrome(char pal[])
{
    int i,n;
    n=length(pal);
    for(i=0;i<=n/2;i++)
    {
        if(pal[i]!=pal[n-i-1])
            break;
        return 0;
    }
    return 1;
}
/*int main()
{
    char str2[20]="madam";
    int i;
    i=palindrome(str2[20]);
    if(i==1)
    {
        printf("palindrome");
    }
    if(i==0)
    {
        printf("not  palindrome");
    }
    return 0;
}*/
