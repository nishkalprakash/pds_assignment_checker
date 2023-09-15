#include<stdio.h>
int main ()
{
  int i;
  int x;
  int rollnumber[10];
  float marks[10];

  // Reading roll numbers
  for (i=0;i<10;i++)
    {
      printf("\nEnter the rollnumber");
      scanf("%d",&x);
	if(x<0){
	printf("\nEnter only possitive numbers\n");
	i--;
	}
	else rollnumber[i]=x;
    }

  // ReadingPrinting the array  roll numbers for test
  for (i=0;i<10;i++)
    {
      printf("Roll Number [%d] = %d\n",i, rollnumber[i]);
    }
  return 0;
}
