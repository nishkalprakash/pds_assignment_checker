/* Name: Abhijit Kumar
Roll no. 22IM10001
Section 14
Question 3
Topic-Printing the coloumn majour input*/
#include<stdio.h>
int main()
{
int a[100][100];
int c,r,e;
printf("\n Enter the number of elements in one row : ");
scanf("%d",&c);
printf("\n Enter the number of elements: ");
scanf("%d",&e);
r=e/c;
int i,j;
printf("Enter the elements:-  \n");
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   {
    scanf("%d",&a[i][j]);
   }
 }
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   {
    printf("%d",a[j][i]);
   }
 }
}
