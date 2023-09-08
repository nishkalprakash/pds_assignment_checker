#include <stdio.h>
#include <stdlib.h>

// Roll No. 23IE10031
// Name- Om Singh Jadon

int main()
{
  int num,first=-1,sec=-1,thir=-1,fourth=-1;
  while(1)
    {
      printf("Enter a Single Digit Number:");
      scanf("%d", &num);
      if(num<0) {printf("Invalid Number\n"); return 0;}
      first = sec;
      sec = thir;
      thir = fourth;
      fourth = num;
      if (first==5 && sec==1 && fourth==7)
	{
	  printf("Pattern Found!\n");
	  return 0;
	}
    }
  return 0;
}
