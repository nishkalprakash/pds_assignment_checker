#include <stdio.h>
int main()
{
int n,max1,max2;
max1=0;//
max2=0;

while(1)
  {
  scanf("%d",&n);// input from user 
  if (n<0) // n is negative 
     break;
  if (n>max1)
     max2=max1;
     max1=n;
   }
  printf("Largest number: %d\n",max1);
  if (max2==0) // 2nd term is not entered
     printf("second largest number: Value not yet entered\n\n");
  else
     printf("second largest number: %d\n\n",max2);
   
   
 return 0;
 }
  
   
