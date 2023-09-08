#include <stdio.h>
int main()
{
  int n, sum = 0, max1=0 , max2=0,dig ;
  printf("Enter the input ");
  scanf("%d", &n);
    
  
  
  while(n>0)
    { dig=n%10;
      sum+= dig;
      
  if (dig>max1)
    { max2=max1 ;
      max1 = dig ;}
    
  if (dig< max1 && dig > max2)
    max2= dig;
    n=n/10;
    }
  printf("The sum of the digits is %d\n", sum ) ;
printf("The largest digit is %d\n", max1);
  printf("The second largest digit is %d\n", max2);
 return 0 ;
}
