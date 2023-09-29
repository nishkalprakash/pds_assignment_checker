//ROLL NO:23MF10023
//NAME: MODHA SOUMYA VAHINI
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,n;
  scanf("%d",&n);
  printf("the number of random numbers: "); 
  
  {
    for(i=0;i<100;i++)
      printf("%d\n",( rand() % 100 ) );
  }
  return 0;
}


    
  
 
 
