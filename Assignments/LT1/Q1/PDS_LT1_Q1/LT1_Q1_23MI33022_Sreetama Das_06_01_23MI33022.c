//Roll no: 23MI33022
//Name: Sreetama Das

#include <stdio.h>
int main()
{
  int i,j,n;
  printf("Enter an integer from 0 to 9");
  scanf("%d", &n);// taking integers
  //starting loop
  for(i=0;i<=n;i++)
    {
      for(j=0;j<=i;j++)
	{
	  printf("%d\n", j);// printing pattern
	}
    }
  return 0;
}
 
