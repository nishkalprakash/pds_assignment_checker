/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 3
*/
#include <stdio.h>
int palindrome(char str[],int n);

int main()
{
    int c;
    printf("choice 1 : enter a array of numbers and program will reverse it\n");
    printf("choice 2 : enter a string to check anagram.\n");
    printf("choice 3 : enter a string to check pallindrome. \n");
    printf("Enter your choice  :");
    scanf("%d",&c);
    printf("\n");

    if (c==1)
    {
        int n,i;
        printf("Enter number of elements you want to enter : ");
        scanf("%d",&n);
        printf("please enter only integers.\n");
        int A[n],a;
        scanf("%c",&A[i]);

        for (i=0;i<n;i++)
        {
            printf("enter A[%d] = ",i);
            scanf("%d",&A[i]);
        }

        for (i=0;i<(n/2);i++)
        {
            a=A[n-i-1];
            A[n-i-1]=A[i];
            A[i]=a;
        }

        printf("array after reversed : ");
        for (i=0;i<n;i++)
        {
           printf("%d ",A[i]);
        }
    }

    else if (c==2)
    {
        char A[20],B[20];
        int i;

        for (i=0;i<20;i++)
        {
            A[i]=' ';
        }
        for (i=0;i<20;i++)
        {
            B[i]=' ';
        }

        int a[200],b[200],c,j=0;
        for (i=0;i<200;i++)
        {
            a[i]=0;
            b[i]=0;
        }
        printf("enter 1st string : ");
        scanf("%s",A);
        printf("enter 2nd string : ");
        scanf("%s",B);
        for (i=0;i<20;i++)
        {
           c=A[i];
           a[c]++;
        }
        for (i=0;i<20;i++)
        {
           c=B[i];
           b[c]++;
        }
        for (i=0;i<200;i++)
        {
            if (a[i]==b[i])
            j++;
        }

        if (j==200)
            printf("%s and %s are anagram.",A,B);
        else
            printf("%s and %s are not anagram.",A,B);


    }

    else if (c==3)
    {
        int i;
        char A[20];
        printf("enter a string to check palindrome or not=");
        scanf("%s",A);
        for (i=0;i<20;i++)
        {
            if (A[i]=='\0')
                break;
        }
        if (palindrome(A,i)==1)
            printf("%s is a pallindrome.",A);
        else
            printf("%s is a not pallindrome.",A);

    }

    return 0;
}

int palindrome(char str[],int n)
{
    int i,j=0;
    char a,b[n];
    for (i=n-1;i>=0;i--)
    {
        b[i]=str[n-1-i];
    }
    for (i=n-1;i>=0;i--)
    {
        if (b[i]==str[i])
            j++;
    }
    if (j==n)
        return 1;
    else
        return 0;
}
