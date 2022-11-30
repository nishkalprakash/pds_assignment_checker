//Assignment 4
//section 14
//Name:Sanika Kadam
//Question 4


//To print pattern



#include<stdio.h>
int main()
{
int N;
printf("Enter the integer: ");
scanf("%d",&N);

int i,j;
for(i=1;i<=N;i++);
  for(j=0;j<=i;j++)
  {
  printf("1",i);
  printf("0",j);
 
  }
printf("\n");
j=i-1;
return 0;
}
 