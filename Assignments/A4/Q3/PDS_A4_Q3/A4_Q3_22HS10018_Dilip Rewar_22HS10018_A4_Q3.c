#include<stdio.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 4
Description: Program for Numero-Pyramid
*/
int main()
{
    int n,i,j,k,l;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=i;k<=2*i-1;k++)
        {
            printf("%d",k%10);

        }
        for(l=2*i-2;l>=i;l--)
        {
            printf("%d",l%10);

        }

        printf("\n");
    }

    return 0;

}

