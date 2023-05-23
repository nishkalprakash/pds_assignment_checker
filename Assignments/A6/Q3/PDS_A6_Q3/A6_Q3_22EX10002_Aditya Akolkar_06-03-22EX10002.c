#include<stdio.h>

int n;


int reverse(char a[])
{
    int length=0;
    int i;
    for (i=0; a[i]!='\0'; i++)
    length++;

    for(i=length-1; i>=0; i--)
    {
        printf("%d", a[i]);
    }
}

int anagram(char string1[50], char string2[50])
{

}


int palindrome(char str[20])
{
    int i, j=0, length = 0;

    while (str[length]) length++;


    for (i = 0; i < length; i++)
    {
        if (str != str[length-1-i]) j = 1;
    }
    return j;

}

int main()
{

    int var;
    scanf("%d", &var);

    if(var==1)
    {
        int i;
        scanf("%d", &n);
        int A[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &A[i]);
        }
        reverse(A[n]);
    }

    else if(var==2)
    {

    }

    else if(var==3)
    {
        char string[20];
        scanf("%s", string);
        if(palindrome(string))
        {
            printf("%s is a palindrome", string);
        }
        else
        {
            printf("%s is not a palindrome", string);
        }
    }
}
