/*
*Section 2
* Roll No : 22MI10040
* Name : Mrinmoy Dey
* Assignment No : 4
* Description : Program to find magic number
*/
#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=i;k<=n-1;k++) //printing the spaces
            printf(" ");
        for(j=i;j<2*i;j++)
            printf("%d",j%10);
        for(l=2*i-2;l>=i;l--)
            printf("%d",l%10);
        printf("\n");
    }
}
