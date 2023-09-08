#include <stdio.h>
int main()
{
  int a,x,sum=0,max=-1,smax=-1;
  printf("Enter the number :\n");
  scanf("%d",&a);
  x=a;
    while(x>0)
      {
	int a =x%10;
	sum=sum+a;
	x=x/10;
	if(a>max)
	  {
	    max=a;
	  }
	if((a>smax)&&(a<max))
	  {
	    smax=a;
	  }
      }
    
  printf("The sum of digits is %d\n",sum);
  printf("The largest digit is %d\n",max);
  printf("The second largest digit is %d\n",smax);
  
  return 0;
}
	
