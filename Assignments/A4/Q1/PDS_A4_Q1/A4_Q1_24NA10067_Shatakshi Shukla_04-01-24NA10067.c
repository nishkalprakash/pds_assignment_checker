#include <stdio.h>

int main(){
int n;
int sum =0;
printf("Enter the nth term till which the series is to be printed \n");
scanf("%d" ,&n);
for (int i = 0 ; i<n ; i++)
{
  if (i==0)
  printf("1");
  sum = sum + i;
  if (i%2 == 0)
  {
     printf(" %d" ,sum); 
     }
     else 
     printf("-%d" , sum);
     }
     }
     
  
   

