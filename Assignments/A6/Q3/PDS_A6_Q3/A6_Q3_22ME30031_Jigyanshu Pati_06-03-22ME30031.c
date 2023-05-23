//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 6
//description:Q3
#include<stdio.h>
void reverse(int n,int a[n])
{
    int i;
    for (i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
void agrm(char str1[],char str2[])
{
    int len1=0, len2=0,i,j,count=0;
    while (str1[len1])
    {
        len1++;
    }
    while (str2[len2])
    {
        len2++;
    }
    if (len1==len2)
    {
        for (i=0;i<len1;i++)
        {
            for (j=0;j<len1;j++)
            {
                if (str1[i]==str2[j])
                {
                  count++;
                }
            }
        }
        if (count==len1)
        {
            printf("%s and %s are anagrams",str1,str2);
        }
    }
    else
    {
        printf("%s and %s are not anagrams",str1,str2);
    }
}
int palindrome(char s[20])
{
    int len=0,count=0,i;
    while (s[len])
    {
        len++;
    }
    for (i=0;i<=len/2;i++)
    {
        if (s[i]!=s[len-i+1])
        {
            count++;
        }
    }
    if (count==0)
    {

        return 1;
    }
    else
    {
        return 0;
    }

}


int main()
{
    int i,len,j,a[20],pdm;
    char str1[20],str2[20],b[20];
    scanf("%d",&i);
    if (i==1)
    {
        scanf("%d",&len);
        for (j=0;j<len;j++)
        {
            scanf("%d",&a[j]);
        }
        reverse(len,a);
    }
    if (i==2)
    {
        scanf("%s%s",&str1,&str2);
        agrm(str1,str2);
    }
    if (i==3)
    {
        scanf("%s",&b);
        pdm=palindrome(b);
        if (pdm==0)
        {
            printf("%s is not a palindrome",b);
        }
        if (pdm==1)
        {
            printf("%s is not a palindrome",b);
        }
    }

}
