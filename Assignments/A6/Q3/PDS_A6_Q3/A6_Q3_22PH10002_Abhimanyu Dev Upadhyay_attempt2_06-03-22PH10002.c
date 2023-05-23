//22PH10002
//Lab 6 Problem 3
//Strings

#include <stdio.h>

void arev(int *a, int *b, int n)
{

    if(n>0)
    {
        int t = *a;
        *a = *b;
        *b = t;
        arev(a+1,b-1,n-1);
    }
    return;
}
int strcheck(char s1[50],char s2[50])
{
    int l1=0, l2=0;
    int i =0;
    while(s1[i]!='\0')
    {
        l1++;
        i++;
    }
    i =0;
    while(s2[i]!='\0')
    {
        l2++;
        i++;
    }
    if(l1!=l2)
    {
        return 0;
    }
    else
    {
        int j;
        for(j = 0; j < l1; j++)
        {
            for(int k = 0; k < l1-1; k++)
            {
                if((int)s1[k]>(int)s1[k+1])
                {
                    char c = s1[k];
                    s1[k] = s1[k+1];
                    s1[k+1] = c;
                }
                if((int)s2[k]>(int)s2[k+1])
                {
                    char c = s2[k];
                    s2[k] = s2[k+1];
                    s2[k+1] = c;
                }
            }
        }
        for(j =0; j<l1; j++)
        {
            if(s1[j]!=s2[j])
            {
                return 0;
            }
        }
        if(j==l1)
        {
            return 1;
        }
    }
}
int palindrome(char str[20])
{
    int l=0, i=0;
    while(str[i]!='\0')
    {
        l++;
        i++;
    }
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=str[l-i-1])
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int t;

    scanf("%d", &t);
    if(t==1)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        arev(&a[0],&a[n-1],n/2 + 1);
        for(int i = 0;i<n;i++)
        {
            printf("%d ", a[i]);
        }
    }
    if(t==2)
    {
        char x1;
        scanf("%c", &x1);
        char s1[50],s2[50],s3[50],s4[50];
        gets(s1);
        gets(s2);
        for(int i = 0; i<50; i++)
        {
            s3[i]=s1[i];
            s4[i]=s2[i];
        }
        if(strcheck(s1, s2))
        {
            printf("\n%s and %s are anagrams.", s3, s4);
        }
        else
        {
            printf("\n%s and %s are not anagrams.", s3, s4);
        }
    }
    if(t==3)
    {
        char c2;
        scanf("%c", &c2);
        char str[20];
        gets(str);
        if(palindrome(str))
        {
            printf("\n%s is a palindrome",str);
        }
        else
        {
            printf("\n%s is not a palindrome",str);

        }

    }
    return 0;
}
