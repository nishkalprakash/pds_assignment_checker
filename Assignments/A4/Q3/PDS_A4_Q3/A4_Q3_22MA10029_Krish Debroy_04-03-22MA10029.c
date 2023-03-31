#include <stdio.h>

int main()
{
    /*
    Section 2
    Name : Krish Debroy
    Roll No. : 22MA10029
    Assignment No :- 4
    Description : Program to print Numero-pyramid.
    */



    int n,i,j,k;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) /*Main loop for number of rows*/
    {
        for(j=1;j<=(n-i);j++)/*Loop for spaces */
        {
            printf(" ");
        }
        k=i%10;
        for(j=1;j<=i;j++)/*Loop for numbers in increasing order*/
        {
            if(!(k<10))
            {
                k=0;
            }
            printf("%d",k);
            k++;
        }
        k--;/*This is needed as the previous loop increments k once before exiting.*/
        for(j=1;j<i;j++) /*loop for numbers in decreasing order.*/
        {
            if(k==0)
            {
                k=9;
            }
            else
            {
                k--;
            }
            printf("%d",k);

        }
        printf("\n");
    }

}
