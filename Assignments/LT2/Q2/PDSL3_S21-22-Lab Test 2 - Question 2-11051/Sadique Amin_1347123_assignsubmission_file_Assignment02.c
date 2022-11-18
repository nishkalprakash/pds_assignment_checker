/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>

int maxAlphaValue(int S[]);

int n;
int main()
{
    int s[1000000];
    printf("Enter the length:");
    scanf("%d",&n);
    printf("Enter the array s[]:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    int max=maxAlphaValue(s);
    printf("Maximum Alpha value of the sequence:%d",max);
    return 0;
}
int maxAlphaValue(int s[])
{
    int c=0;
    int max=0;
    for(int i=n-1;i>0;i--)
    {
        c=0;
        for(int j=0;j<i;j++)
        {
            if(s[j]%s[i]==0)
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
        }
    }
    return max;
}