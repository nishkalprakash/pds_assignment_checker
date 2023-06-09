/*
NAME : Tejashwi Kumar Jha
ROLL : 22CH30033
*/

#include<stdio.h>


int main()
{

    int n;
    printf("Enter the no. integers to store them in an array : \n");
    scanf("%d",&n);

    int i,j;
    float a[n];
    printf("Enter your integers.\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%f",&a[i]);
    }

    printf ("List = [");
    for (j=0 ; j < n-1 ; j++)
    {
        printf(" %0.0f \, " , a[j]);
    }
    printf(" % 0.00f ]",a[n-1]);

    float s = 0;
    for (int k = 0 ; k < n ; k++)
    {
        s = s + (a[k]/n);
    }

    printf("\nMean = %0.2f",s);

}
