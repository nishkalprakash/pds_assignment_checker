/*
Anindita Malviya
21MI33004
Section3
Code blocks
Question 2
*/

#include <stdio.h>

int alpha(int A[],int x,int index);         //declaring functions written in later part
int maxAlphaValue(int A[],int x);

int main()
{
    int n;
    printf("Enter the no. elements in the array: ");       // prompting user for array and its elements
    scanf("%d",&n);
    int s[n];
    int alphas[n];
    printf("Enter array s[]:  ");          // prompting user for array and its elements
    for (int i = 0; i< n; i++)
    {
        scanf("%d",&s[i]);
    }

    for (int i = 0; i < n; i++)
    {
        alphas[i] = alpha(s,n,i);            //Filling an array full of aplhas of each index
    }

    int max_alpha = maxAlphaValue(alphas,n);      //Finding max of all alphas

    printf("Output max alpha: %d",max_alpha);
}

int alpha(int A[],int x,int index)        //function to find alpha
{
    int y = 0;

    for (int i = 0; i < x; i++)
    {
        if(A[i] % A[index] == 0)
        {
            y++;
        }

    }
    y = y - 1;

    return y;

}

int maxAlphaValue(int A[],int x)       //function to find the max of alphas
{
    int max = A[0];
    for (int i = 0; i < x; i++)
    {
        if (max <= A[i])
        {
            max = A[i];
        }
    }
    return max;
}
