//Roll No.: 23CS30029
//Name: Kshetrimayum Abo
#include <stdio.h>
#include <math.h>
int main()
{
  int num, binnum, i, encodeval = 0, sum = 0;
  long int doubencode = 0;
  printf("Enter a number : ");
  scanf("%d",&num);


  //Part1
  if ( num < 9999)
    {
      binnum = num;
      for( i = 0; binnum>0; i++)
	{
	  //cases for when digit is 9 or not as it would then be encoded into 2 digit value 10 which will need a special condition
	  if (binnum%10 == 9)
	    {
	      encodeval = encodeval + pow(10,i+1); 
	      i++;
	    }
	  else
	    encodeval = encodeval + (binnum%10+1)*pow(10, i);
	  binnum = binnum/10;
	  
	}
    }
  printf("%d\n%d\n",num, encodeval);

  //Part1.b
  binnum = encodeval;
  for (i = 0; binnum > 0; i++)
    {
      sum = sum + binnum%10;
      binnum = binnum/10;
    }
 
  sum = encodeval*100+sum;
  printf("Check Sum : %d\n",sum);
  

  //Part1.c
  binnum = sum;
  for(i = 0; binnum > 0; i++)
    {
      doubencode = doubencode + binnum%10*pow(10,i+1);
      binnum = binnum/10;
      i++;
    }
  printf("Double Encoded Value : %ld\n",doubencode);
  return 0;
}
