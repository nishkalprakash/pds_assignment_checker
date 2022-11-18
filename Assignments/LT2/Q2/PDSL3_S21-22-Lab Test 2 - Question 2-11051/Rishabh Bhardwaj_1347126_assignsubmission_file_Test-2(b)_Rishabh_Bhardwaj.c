/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/

#include<stdio.h>


//Executing the function
int maxAlphaValue(int S[], int n)/*I add an another argument in his function
so it becomes easy to handle arrays.*/
{
    int i, j, count=0, a[100],m=0;

    //loop
    for (i=0;i<n;i++)
    {
        for(j=0; j<n; j++)
        {
            if (S[i]%S[j]==0)
            {
                a[j]=0;
                a[j]=S[j];
                count++;
            }
        }

    }
    //loop
    for (i=0;i<n;i++)
    {
        if (a[i] != 0)
        {
            m++;
        }
    }
    return(m);/*returning the value to the main function*/
}

int main(void)
{
    int S[100], i ,n, out;

    //Enter the number of elements you want to store in the array.
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    //loop
    for (i=0;i<n;i++)
    {
        printf("Enter the array S[%d] = ", i+1);
        scanf("%d", &S[i]);
    }


    //Execute the function
    out = maxAlphaValue(S, n);

    /*final output*/
    printf("Output = %d", out/2);

}
