//Roll no. : 23EE10056//
//Name : Ritwik Suresh//
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,max,num;
  for(i=1;i<=20;i++)
    {
      num = rand()%100;
      printf("%d ",num);
      if(num>max)
	max = num;
    }
  printf("\n");
  printf("The maximum among the given numbers is %d\n",max);
  return 0;
}
      
