//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <stdlib.h>
int main()
{ 
	int i, j, max=0;
	for (i=0 ; i<20 ; i++) {
		j= rand() % 100;
		printf("%d\n", j);
		if(j>max)
		max=j;
	}
  	printf("The maximum number that was generated is %d\n", max);
	return 0;
}


