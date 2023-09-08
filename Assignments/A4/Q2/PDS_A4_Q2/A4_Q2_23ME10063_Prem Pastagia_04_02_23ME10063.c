// Roll No. 23ME10063
// Name: Prem Pastagia

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,max=0,a;
  for(i=0;i<=20;i++)
    {a=rand() % 100;
     printf("%d\n",a);
     if (a>max)max=a;
    }
  printf("The maximum number is: %d\n",max);
  return 0;
}
