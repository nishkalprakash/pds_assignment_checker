/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int maxAlphaValue(int s[],int n)
{
    int i,j,c=0,max=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
        {
            if (s[j]%s[i]==0) //checking if the s[i] value divides the numbers down the array
            {
                c=c+1;
            }
        }
        if(c>max)
        {
            max=c; //getting the maximum such values
            c=0;
        }
    }
    return max;
}

int main()
{
    int n,i,a;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int s[n];
    printf("Enter elements of the array : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    a=maxAlphaValue(s,n);
    printf("Alpha value is : %d",a);

    return 0;
}
