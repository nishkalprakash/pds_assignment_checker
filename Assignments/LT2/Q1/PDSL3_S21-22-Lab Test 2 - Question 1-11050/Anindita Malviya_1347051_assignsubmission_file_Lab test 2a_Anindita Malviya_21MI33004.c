/*
Anindita Malviya
21MI33004
Section3
Code blocks
Question 1
*/

#include <stdio.h>

int main()
{
    int n;
    int A[20];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: ");        //Prompting user for array
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    int sum;
    int max = 0;

    for(int i = 0; i < n; i++)
    {                                                      //Finding maximum
        for(int j = i; j < n; j++)
        {
            sum=0;

            for(int k = i; k <= j; k++)
            {
                sum = sum + A[k];
            }
            if(sum > max)
            {
                max = sum;

            }
        }
    }
    printf("Largest sum = %d\n",max);


}
