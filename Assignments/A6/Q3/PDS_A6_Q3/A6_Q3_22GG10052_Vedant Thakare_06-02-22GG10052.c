/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 6
* Description :inputting strings
*/
#include<stdio.h>
int swap(int *x,int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
int main()
{
    int i,n1,n2;
    printf("Enter the test number\n");
    scanf("%d",&n1);
    //test case 1
    if(n1==1)
    {
        printf("Enter the number of array elements\n");
        scanf("%d",&n2);
        int arr1[n2],temp;
        printf("Enter the elements\n");
        for(i=0;i<n2;i++)
        {
            scanf("%d",&arr1[i]);
        }
        for(i=0;i<n2/2;i++)
    {
        temp=arr1[i];
        arr1[i]=arr1[n2-1-i];
        arr1[n2-1-i]=temp;
    }
        for(i=0;i<n2;i++)
        {
            printf("%d ",arr1[i]);
        }
    }
    //test case 2
    if(n1==2)
    {
        int n3,k,l,t,count;
        char s1[100],s2[100];
        printf("Enter the elements of string1\n");
        gets(s1);
        gets(s1);
        printf("Enter the string2\n");
        gets(s2);
        for(n3=0;s1[n3]!='\0';n3++)
        for(k=0;k<n3;k++)
        {
            count=0;
            for(l=0;l<n3;l++)
            {
                if(s1[k]==s2[l])
                    count=1;
            }
            if(count==1)
            {
                continue;
            }
            else
            {
                t=8;
                break;
            }
            if(k==n3-1)
            {
                printf("The strings are anagrams\n");
            }
        }
        if(t==8)
        {
            printf("The strings are anagrams\n");
        }
    }
    //test case 3
    if(n1==3)
    {
     int s3[100],d,n4;
     printf("Enter the string\n");
     gets(s3);
     gets(s3);
     for(n4=0;s3[n4]!='\0';n4++)
     for(d=0;d<n4;d++)
     {
         if(s3[d]==s3[n4-d-1])
            continue;
         else
            break;
     }
     if(d==n4)
     {
         printf("The number is a palindrome\n");

     }
     else
     {
         printf("The number is a palindrome\n");
     }

    }
}
