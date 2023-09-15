#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main ()
{

  int a[50];
  int number; 
  int num;
  int lower = 10, upper=50;
  int n;
  printf("enter the amount of numbers to be generated");
  scanf("%d", &num);
  
  
  for(n=0;n<num; n++){
         
  a[n] = (rand() % (upper-lower+1) +lower);
  printf(" %d", a[n]);
  }
  return 0;
}
	      
     
