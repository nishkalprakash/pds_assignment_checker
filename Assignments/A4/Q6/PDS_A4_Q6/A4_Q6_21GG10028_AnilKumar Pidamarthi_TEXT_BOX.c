#include<stdio.h>
#include<stdlib.h>
int main()
{int i;
  int smallvalue;
  for(i = 5000; i <= 6000; i++);
  {
    printf("%d\n", rand()%10);
  }
 
  return 0;
}