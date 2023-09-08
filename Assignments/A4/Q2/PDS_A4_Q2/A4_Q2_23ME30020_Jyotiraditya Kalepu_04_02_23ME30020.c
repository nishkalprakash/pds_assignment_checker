//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num =0, max= 0;
  printf("Twenty randomly generated numbers are\n");
  max = rand()%100 +1;           // Assigning max a random value
  printf("%d\n",max);
  for(int i=0; i<19; i++)        // Running a loop to find the remaining 19 random numbers
    {
      num = rand()%100 +1;
      printf("%d\n",num);
      if(num > max) max = num;   // Finding maximum of all Random numbers
    }
  printf("Maximum random integer generated is %d\n", max);
  return 0;
}
