//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>

int main( ) {
  int i,r,max=0;
  printf("Random numbers\n");
  for(i=1;i<=20;i++)
    {r=rand()%100;
    printf("%d\n",r);
    //to find maximum of 20 random numbers and store it in variable max
    if(max<r)
      max=r;}
  printf("The maximum number=%d\n",max);
  return 0;
}
    
