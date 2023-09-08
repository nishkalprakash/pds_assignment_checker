//ROLL NO.:23BT30019
//NAME: NAZEER ANWAR

#include<stdio.h>
int main()
{
  int n,max1=0,r,s=0,max2=0;
    printf("Enter a number: ");
  scanf("%d",&n);
  if(n>=0 && n<=9)
    {
      printf("sum of digit=%d  ",n);
      printf("1st largest=%d , 2nd largest=0  ",n);
    }
  else
    {
      int m =n;
    while(n>0)
      {
	r=n%10;
	s=s+r;
	if(r>max1)
	  max1=r;
	n=n/10;
      }
    printf("sum of digits of the number is %d  " ,s );
while(m>0)
  {
    r=m%10;
    if(r>max2 && r!=max1)
      max2=r;
    m=m/10;
  }
 printf("1st largest=%d , 2nd largest=%d ",max1,max2);
}
}
