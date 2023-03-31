/*
*section 2
*Roll no:22CS10037
*Name:22CS10037
*Assignment no:4
*description:program of Numero pyramid
*/
#include<stdio.h>
int main()
{

    int i,j,k,n,p,m;
    printf("enter no.of rows");
    scanf("%d",&n);
    m=n;
    for(j=1;j<=n;j++)
    {

      for(i=m;i>=1;i--)
       {
         printf(" ");
       }
       for(k=j;k<=2*j-1;k++)
       {
           printf("%d",k);
       }
       for(p=2*j-2;p>=j;p--)
       {
           printf("%d",p);
       }
       printf("\n");
       m--;
    }
}