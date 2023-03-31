/*
Roll No. -: 22CH30033
Name -: Tejashwi Kumar Jha
Section -: 2
Assignment No. :- 4
Question No. -: 3
Assignment -: Printing Numero pyramid
*/
#include<stdio.h>
int main()
{
int i,j,k,l,n;
printf("Enter LIMIT: ");
scanf("%d",&n);

for(i=1 ; i<=n ; i++)
{

for(k=i ; k<=n-1 ; k++)
printf(" ");

for(j=1 ; j<=n ; j++)
printf("%d",j);

for(l=i-1 ; l>=1 ; l--)
printf("%d",l);
printf("\n");
}
}



