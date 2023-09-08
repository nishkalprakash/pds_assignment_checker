//Name: Swaraj Dian
//Roll No.: 23EC30056

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,no, max=0;
  for(i=0;i<20;i++)
    {
      no=rand()%100;   //Generating random numbers between 0-100
      printf("%d\n",no);
      if (no>max)
	max=no;        //Checking the maximum number
    }
  printf("Maximum of generated numbers is: %d ", max);
}
