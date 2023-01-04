/* Name: Abhijit Kumar
Roll No. 22IM10001
Section 14
Lab No.7
Question 5
Topic- To------------------------- */

#include<stdio.h>
int main()
{
int m,n;
printf("Enter the number of elements :- ");
scanf("%d",&n);
printf("Enter the number of appearances :- ");
scanf("%d",&m);
int arr[n],i,j;
printf("\n Enter the elements :- \n");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
int count;
for(i=0;i<n;i++)
{ 
count=0;
for(j=0;j<n;j++)
{
if(arr[i]==arr[j])
count++;
}
if(count==m)
printf("\n %d appears %d times",arr[i],m);
else if(count<m)
{printf("No number appears %d times",m);
break;}
}
}

