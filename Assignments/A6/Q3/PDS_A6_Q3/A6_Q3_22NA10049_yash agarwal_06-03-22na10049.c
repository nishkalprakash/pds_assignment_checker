/*
* Section 2
* Roll No : 22NA10049
* Name : Yash Agarwal
* Assignment No : 4
* Description : string
*/

#include <stdio.h>
int rev(int *a,int n,int index)
{
    int temp;


  if(index<=n/2)
  {
      temp=a[index];
      a[index]=a[n-index-1];
      a[n-index-1]=temp;
      rev(a,n,index+1);
  }
}

  int palindrome(char s[20])
  {
   int i,flag=0,len=0;
   while(s[i]!='\0')
    {
        i++;
        len++;
    }
   for(i=0;i<len;i++)
   {

       if(s[i]!=s[len-i-1])
       {


        flag=1;
       }
   }


   return flag;


  }

  int strcheck(char str1[50],char str2[50])
  {
      int i=0,l1=0,l2=0;
    while(str1[i]!='\0')
    {
        i++;
        l1++;
    }


    i=0;

     while(str2[i]!='\0')
    {
        i++;
        l2++;
    }
    char ch;
    if(l1==l2)
    {
        for(i=0;i<l1-1;i++)
        {
            for(int j=0;j<l1-1;j++)
            {
              if((int)str1[j]<(int)str2[j+1])
              {
                 ch=str1[j];
                 str1[j]=str1[j+1];
                 str1[j+1]=ch;

              }

            }
        }

        for(i=0;i<l1-1;i++)
        {
            for(int j=0;j<l1-1;j++)
            {
              if((int)str2[j]<(int)str2[j+1])
              {
                 ch=str2[j];
                 str2[j]=str2[j+1];
                 str2[j+1]=ch;

              }

            }
        }

        for(i=0;i<l1;i++)
        {
           if(str1[i]!=str2[i])
              return 0;
        }
        return 1;
    }

    else
    {
     return 0;
    }

  }



int main()
{

    int t;
    scanf("%d",&t);

    if(t==1)  //array reverse
    {
        int n;

        scanf("%d",&n);

         int a[n];
        for(int i=0;i<n;i++)
        {

            scanf("%d",&a[i]);
        }

        rev(&a,n,0);

       for(int i=0;i<n;i++)
        {

            printf("%d ",a[i]);
        }


    }


    if(t==2)
    {
        char a[50],b[50];

        scanf("%s",&a);
        scanf("%s",&b);

        if(strcheck(a,b))
            printf("%s and %s are anagrams",a,b);
        else
            printf("%s and %s are not anagrams",a,b);

    }


    if(t==3) // palindrome
    {
     char str[20];
     scanf("%s",str);

     if(!palindrome(str))
        printf("%s is a palindrome\n",str);
     else
        printf("%s is not a palindrome\n",str);

    }
}
