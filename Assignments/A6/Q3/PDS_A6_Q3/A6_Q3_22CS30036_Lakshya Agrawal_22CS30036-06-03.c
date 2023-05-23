/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 6
Description : Recursive Funtions
*/

#include<stdio.h>

void reverse(int arr[],int n,int i)
{
    if(i==(n/2)) return;
       int temp = arr[i];
       arr[i] = arr[n-i-1];
       arr[n-i-1] = temp;
       reverse(arr,n,i+1);
}

int is_anagrams(char str1[],char str2[])
{
    int len1=0,len2 = 0;
    for(int i=0;str1[i]!='\0';i++)
        len1++;
    for(int i=0;str2[i]!='\0';i++)
        len2++;
    if(len1!=len2)
        return 0;
    else
    {
        int flag=0;
        for(int i=0;str1[i]!='\0';i++)
        {
            flag = 0;
            for(int j=0;str2[j]!='\0';j++)
            {
                if(str1[i]==str2[j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                return 0;
        }
    }
    return 1;
}

int palindrome(char str[])
{
    static int j=0;
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    len++;
    if(j==len/2) return 1;
    if(str[j]!=str[len-j-1])
        return 0;
    else
    {
        j++;
        return palindrome(str);
    }
}

int main()
{
    int type;
    scanf("%d",&type);
    if(type==1)
    {
        int n,arr[100];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        printf("Reversed Order : ");
        reverse(arr,n,0);
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
    }
    else if(type==2)
    {
        char str1[100],str2[100];
        scanf("%s %s",str1,str2);
        if(is_anagrams(str1,str2))
            printf("%s and %s are anagrams\n",str1,str2);
        else
            printf("%s and %s are not anagrams\n",str1,str2);
    }
    else
    {
        char str[100];
        scanf("%s",str);
        if(palindrome(str))
            printf("%s is a palindrome",str);
        else
            printf("%s is not a palindrome",str);
    }

    return 0;
}

