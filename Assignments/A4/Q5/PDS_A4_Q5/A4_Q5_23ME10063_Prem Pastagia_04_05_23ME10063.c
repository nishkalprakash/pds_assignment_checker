// Roll No. 23ME10063
// Name: Prem Pastagia

#include <stdio.h>
#include <stdlib.h>
int main()
{
  
  int a,max=0,max2=0,sum,x[1000],b,count=0,i;
  printf("Enter a number:\n");
  scanf("%d",&a);
  b=a;
  while(a>0){
    sum+=(a%10);
    a=a/10;
    count++;
  }
  while(b>0){
    i=b%10;
   
    if(i>max)
      {max=i; }

    if((i>max2)&&(i!=max))max2=i;
     b=b/10;
  }

  printf("Sum of digits=%d\n",sum);
  printf("Largest=%d  Second largest=%d\n",max,max2);

  
  return 0;
}
