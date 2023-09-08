//Name: Swaraj Dian
//Roll No.: 23EC30056

#include <stdio.h>
int main()
{
  int n1=0,n2=0,n3=0,n4=0,k=1;
  while (k==1)         //Starting an infinite loop
    {
      n4=n3;          //Storing last 4 numbers entered by user
      n3=n2;
      n2=n1;
      printf("Enter a single digit number: ");
      scanf("%d",&n1);
      if ((n1<0)||(n1>=10))  //checking if number is single digit non-negative
	break;
      if((n1==7)&&(n3==1)&&(n4==5))
	{
	  printf("Pattern Found\n"); //breaking if pattern found
	  break;
	}
    }
  return 0;  
}
      
