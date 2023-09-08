//Name:lokesh Nitin Ingale
//Roll no:23HS10030
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int max=0,ran,i ;
//using loop to repeat it 20 times
  for(i=1;i<21;i++){
    printf("The random number is : %d\n",ran=(rand()%100)+1);
    if(ran>max)
      max=ran;
  }
    printf("The maximum number is :%d\n",max);
    return 0 ;
 }
 
  
