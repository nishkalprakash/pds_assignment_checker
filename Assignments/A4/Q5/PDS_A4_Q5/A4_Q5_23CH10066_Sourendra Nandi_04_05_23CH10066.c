//Name :Sourendra Nandi
//Roll no : 23CH10066
#include <stdio.h>
int main()
{
  int num,max=0,max2=-1,temp1,temp2,sum=0,digit;
  printf("Enter the Number : ");
  scanf("%d",&num);
  temp1=num;
  if (num>=10)
  {
      while (temp1>0)
    {
      digit=temp1%10;
      sum=sum+digit;
      if(digit>max)
	{
	  temp2=max;
	  max=digit;
	  max2=temp2;
	}
      else if(digit>max2 && digit!=max)
	{
	  max2=digit;
	}
      temp1=temp1/10;
    }
  }
  else if(num<10)
    {
      sum=num;
      max=num;
      max2=0;
    }
  
  printf("Sum of digits = %d\n",sum);
  printf("Largest digit = %d \nSecond Largest digit = %d\n",max,max2);
  return 0;
}
