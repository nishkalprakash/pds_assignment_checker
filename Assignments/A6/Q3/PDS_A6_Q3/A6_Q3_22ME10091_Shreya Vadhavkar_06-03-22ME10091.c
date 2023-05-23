/*Section 2
Roll no.: 22ME10091
Name: Shreya Vadhavkar
Assignment : 6
Description: Reversing array,anagram,palindrome */
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x==1)
    {
        int lim;
        int i;
        scanf("%d", &lim);


        int a[lim];
        for(i=0;i<lim;++i)
        {
            scanf("%d", &a[i]);
            if(a[i]==(int)'\n')
            {
                break;
            }
        }
        for(i=0;i<lim;++i)
        {
            printf("%d ",a[lim-1-i]);
        }
    }
    else if(x==2)
    {
        char a[100],b[100];
        int i=0;
        for(i=0;i<100;++i)
        {
            a[i]='\0';
            b[i]='\0';
        }
        char c;
        int s1=0,s2=0;
        scanf("%c", &c);
        scanf("%[^'\n']",a);
        scanf("%c", &c);
        scanf("%[^'\n']",b);
        for(i=0;i<100;++i)
        {
           if(a[i]!='\0')
           {
               ++s1;
           }
           else
           {
               break;
           }
        }
        for(i=0;i<100;++i)
        {
           if(b[i]!='\0')
           {
               ++s2;
           }
           else
           {
               break;
           }
        }
        if(s1==s2)
        {
            int flag=0;
            for(i=0;i<s1;++i)
            {
                int count1=0,count2=0;
                int j;
                for(j=0;j<s1;++j)
                {
                    if(a[i]==a[j])
                    {
                        ++count1;
                    }
                }
                for(j=0;j<s2;++j)
                {
                    if(a[i]==b[j])
                    {
                        ++count2;
                    }
                }
                if(count1==count2)
                {
                    flag=1;
                    continue;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%s and %s are anagrams.",a,b);
            }
            else
            {
                printf("%s and %s are not anagrams.",a,b);
            }
        }
        else
        {
            printf("%s and %s are not anagrams.");
        }
    }
    else if(x==3)
    {
        char c;
        int flag=0;
        char a[100];
        int i;
        for(i=0;i<100;++i)
        {
            a[i]='\0';
        }
        scanf("%c", &c);
        scanf("%[^'\n']",a);
        int len=0;
        for(i=0;i<100;++i)
        {
            if(a[i]!='\0')
            {
                ++len;
            }
            else
            {
                break;
            }
        }
        for(i=0;i<len/2;++i)
        {
            if(a[i]==a[len-1-i])
            {
                flag=1;
                continue;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%s is a palindrome.",a);
        }
        else
        {
            printf("%s is a not palindrome.",a);
        }
    }
}
