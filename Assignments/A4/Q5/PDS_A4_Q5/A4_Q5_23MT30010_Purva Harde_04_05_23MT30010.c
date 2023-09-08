//Rollno:<23MT30010>
//Name:<Purva Harde>

#include <stdio.h>
int main ()
{
  int x, y, sum=0, maxa=0, maxb=0;
  printf("Enter an integer:");
  scanf("%d",&x);
  if(x >= 10)
    while(x>0){
      y = x%10;
      sum = sum+y;
      x = x/10;
      if(y>maxa)
	maxa=maxa+y;
      if(y>maxb)
	maxa=maxa;
    }
    {
      printf("Largest number is %d\n", maxa);
      printf("Second largest number is %d\n", maxb);
      printf("Sum of the digit is %d\n", sum);
  }
  return 0;
}
	
      
      
      
