/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 06
Description -
*/
#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reversearray(int *a, int n)
{
    for(int i=0; i<n/2; i++)
    {
        swap(a+i,a+n-1-i);
    }
}

int anagram(char *a, char *b)
{
    int lena,lenb;
    int flag = 0;
    printf("%s %s", a,b);
    for(lena=0; *(a+lena)!='\0'; lena++);
    for(lena=0; *(a+lenb)!='\0'; lenb++);
    printf("%d\n", lena);
    printf("%d\n", lenb);
    if(lena==lenb)
    {
        for(int i=0; i<lena; i++)
        {
            for(int j=0; j<lenb; j++)
            {
                if(*(a+i) == *(b+j)) flag++;
            }
        }
        if(flag == lena) return 1;
        else return 0;
    }
    else return 0;
}

int palindrome(char *a, int n)
{
    int flag = 0;
    for(int i=0; *(a+i)!='\0'; i++)
    {
        if( *(a+i)!= *(a+n-1-i)) flag++;
    }
    if(flag==0) return 1;
    else return 0;
}

int main()
{
    int o;
    scanf("%d", &o);

    if(o==1)
    {
        int a[20];
        int n;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        reversearray(a,n);
        for(int i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    if(o==3)
    {
        int result,n;
        char str[20];
        scanf("%s", str);
        for(n=0; *(str+n)!='\0'; n++);
        result = palindrome(str,n);
        if(result==1) printf("%s is a palindrome", str);
        if(result==0) printf("%s is not a palindrome", str);
    }

    if(o==2)
    {
        char str1[20], str2[20];
        int result;
        scanf("%s", str1);
        scanf("%s", str2);
        for(int i=0; str1[i]!='\0'; i++)
        {
            printf("%c ", str1[i]);
        }
        result = anagram(str1, str2);
        if(result==1) printf("%s and %s are anagrams", str1, str2);
        if(result==0) printf("%s and %s are not anagrams", str1, str2);
    }

    return 0;
}
