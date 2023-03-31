#include<stdio.h>

int main()
{
    /*
    * Section 2
    * Name : Atul Choudhary
    * Roll no. 22MA10010
    * Assignment: 4
    * Description: Numerio-pyramid

    */

    int n;
    printf("Enter no of rows:");
    scanf("%d" ,&n);

    int i;
    for(i=1;i<=n; i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");

        }
        for(int k=i;k<=2*i-1;k++)
        {
            printf("%d",k%10);
        }
        for(int k=2*i-2;k>=i;k--)
        {
             printf("%d",k%10);
        }
        printf("\n");
    }

    return 0;
}


