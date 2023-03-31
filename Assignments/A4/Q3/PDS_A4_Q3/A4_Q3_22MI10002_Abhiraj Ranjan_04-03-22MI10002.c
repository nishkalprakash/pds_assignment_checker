/*
Section 2
Roll No. : 22MI10002
Name: Abhiraj Ranjan
Assignment No. : 1
Topic :Number Pyramid
*/
#include<stdio.h>
void main()
{
    int i,j,k,n,x,nf=1,rf=1,rnf=1,c=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(k=i; k<n-1; k++)
            printf("\t");
        for(j=1; j<=i; j++)
        {
            for(x=i; x>0; x--)
                nf+=x;
            for(x=j; x>0; x--)
                rf+=x;
            for(x=i-j; x>0; x--)
                rnf+=x;
            c=nf/(rf+rnf);
            printf("%d\t\t",c);
        }
        printf("\n");
        nf=1,rf=1,rnf=1;
    }
}
