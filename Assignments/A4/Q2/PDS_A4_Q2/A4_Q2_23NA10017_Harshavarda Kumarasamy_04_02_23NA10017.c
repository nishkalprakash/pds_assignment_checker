//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, max, var;
  max = 0;
  for(i=0; i < 20; i++){
    var = rand()%100;
    printf("%d\n", var);
    if(var>max)
      {max=var;
	  }
  }

  printf("The maximum number is %d .", max);

  return 0;
}
