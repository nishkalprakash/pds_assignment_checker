//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
int main()
{
  int n1,n2,n3,val;

  // do-while loop to check the pattern
  do
    {
      printf("Enter number : ");
      scanf("%d",&val);
      if(val < 0)
	break;
      if (val == 5) //if condition for first value of the pattern
	{
	  n1 = val;
	  printf("Enter number : ");
	  scanf("%d",&n2);
	  if (n2 == 1) //if condition for the second value of the pattern
	    {
	      printf("Enter number : ");
	      scanf("%d",&val);
	      printf("Enter number : ");
	      scanf("%d",&n3);
	      if ((n1==5)&&(n2==1)&&(n3==7)) //if condition for checking if all values satisfy the given pattern
		{
		  printf("Pattern found\n");
		  break;
		}
	      else
		continue;
	    }
	  else
	    continue;
	}
      else
	continue;
       
    }while(1);
  return 0;
}
