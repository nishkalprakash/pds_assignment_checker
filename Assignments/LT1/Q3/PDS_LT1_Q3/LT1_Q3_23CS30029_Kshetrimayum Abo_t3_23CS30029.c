//Roll No.: 23CS30029
//Name: Kshetrimayum Abo
#include <stdio.h>
int main()
{
  int i=1, m=1, n, s,counter=0;
  printf("Enter scale factor : ");
  scanf("%d",&s);
  printf("Enter number of lines : ");
  scanf("%d",&n);

  while(n-m>=0) //Should keep on going till we reach line n
    {
      //Loop for printing in a line
      while(i <= s+3 && counter < m)
	{
	  printf("%d",i);
	  if( i  == s+3)
	    i = 0;
	  i++;
	  counter++;	  
	}
      m++;
      counter = 0;
      printf("\n");
    }
  
  return 0;
}
