/*
section 2
roll no:-22EE10056
Name:-rushikesh santosh jadhav
assignment no:-6
Description:-*Reverse ordering of all elements in an array*/

#include<stdio.h>
int n;
void swap(char *p,char *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    return;
}

void reverse(char *a)
{
    static int i=0;
    if(i==(n/2)-1)
    {
        swap(&a[i],&a[n-1-i]);
        return;
    }
    else
    {
        swap(&a[i],&a[n-1-i]);
        i++;
        reverse(a);
    }
    return;
}
void pallindrome(char a[20])
{
    char b[20];
    int l;
    for(l=0;l<20;l++)
        {
           b[l]=a[l];
        }
        reverse(a);
        for(l=0;l<20;l++)
        {
            if(a[l]!=b[l])
            break;
        }
        puts(a);
        if(l==20)
        printf(" is pallindrome");
        else
        printf(" is not pallindrome");
}
int main()
{
    int i,l,j,n;
    printf("enter serial no. of operation to be performed:");
    scanf("%d",&i);
    /*printf("Enter no of elements in string",&j);
    scanf("%d",&j);
    n=j;
    j++;*/
    char a[20],b[20],k;
    if(i==1)
    {
    printf("Enter no of elements in string:");
    scanf("%d",&j);
    j++;
    n=j;
    printf("Enter string:");
    for(l=0;l<=n;l++)
    {
        scanf("%c",&a[l]);
    }
    a[l]="\0";
    reverse(a);
    printf("Reversed array:");
    for(i=0;i<=n;i++)
    {
    printf("%c ",a[i]);
    }
    }
    else if(i==2)
    {

    printf("Enter first string:");
    l=0;
    do
    {
    scanf("%c",&a[l]);
    l++;
    }while(a[l-1]!='\n');
    a[l]='\0';
    printf("Enter second string:");
    l=0;
    do
    {
    scanf("%c",&b[l]);
    l++;
    }while(b[l-1]!='\n');
    b[l]='\0';
    int ctr1,ctr2,k;
    for(l=65,k=97;l<=90;l++,k++)
    {
        ctr1=0;
        ctr2=0;
        for(n=0;n<20;n++)
        {
            if(a[n]==l || a[n]==k)
            {
                ctr1++;
            }
            if(b[n]==l || a[n]==k)
            {
                ctr2++;
            }
        }

       if(ctr1!=ctr2)
       {
           puts(a);
           printf(" and ");
           puts(b);
           printf("are not anagrams");
           break;
       }
    }
    if(l==91)
    {
        puts(a);
           printf(" and ");
           puts(b);
           printf("are anagrams");

    }
    }
    else if(i==3)
    {
        printf("Enter string:");
        gets(a);
        pallindrome(a);
    }

    return 0;
}
