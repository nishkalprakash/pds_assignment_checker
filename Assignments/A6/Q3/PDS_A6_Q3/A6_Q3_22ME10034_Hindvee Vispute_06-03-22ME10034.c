/*
Section 2
22ME10034
Hindvee Rajesh Vispute
Assignment no. 3
*/

#include<stdio.h>


int flag3 = 0;
/* swap*/
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void rev(int *b, int a1, int a2)
{
    if(a1 >= a2)
        return;
    else
    {
        swap(&b[a1], &b[a2]);
        rev(b, a1+1, a2-1);
    }
}

int count(char str[])
{
    int c;
    for(c=0; str[c] != '\0'; c++);
    return c;

}

/* Recursive function for checking palindrome*/
int palindrome(char str[20])
{
    int static c1;
    c1 = count(str);
    int x = c1;

    int i;

    for(i=0; i<=(c1/2); i++)
    {
        if(str[i]==str[c1])
            flag3 = 1;
        else
            flag3 = 0;
        if(flag3 == 1)
            continue;
        else
        {
            printf("\n%s is not a palindrome", str);
            break;
        }
    }
    if(flag3 == 1)
        printf("\n%s is a palindrome", str);
}


/* Function for checking anagram*/
void ana(char b1[], char b2[])
{
    int c1, c2;
    int i,j;
    int flag = 0;
    int flag1 = 0;
    for(c1=0; b1[c1] != '\0'; c1++);// determining maxm index
    for(c2=0; b2[c2] != '\0'; c2++);
    if(c1==c2)
    {
        for(i = 0; i<c1; i++)
        {
            for(j=0; j<c1; j++)
            {
                if(b1[i]==b2[j])
                    flag = 1;
            }
            if(flag==1)
                {
                    flag = 0;
                    flag1 = 1;
                }
            else
            {
                printf("\n %s and %s are not anagrams", b1[c1], b2[c2]);
                break;
            }

        }

        if(flag1==1)
        {
            printf("\n%s and %s are anagrams", b1, b2);
        }
    }
}

int main()
{
    int a[10], n, i;
    char s1[20], s2[20], s[20];
    int y =0;
    int opt; // option chosen by the user
    scanf("%d", &opt);

    if(opt==1)
    {
        printf("Enter limit");
        scanf("%d", &n);
        printf("\nEnter elements");
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }


        rev(a, 0, n-1);

        for(i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    if(opt==2)
    {
        scanf("%s", s1);
        scanf("%s", s2);

        ana(s1, s2);

    }

    if(opt==3)
    {
        scanf("%s", s);
        palindrome(s);
    }
    return 0;



}
