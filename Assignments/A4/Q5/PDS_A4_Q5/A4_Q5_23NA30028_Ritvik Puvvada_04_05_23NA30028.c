//Roll No:23NA30028//
//NAME:RITVIK PUVVADA//

#include<stdio.h>
int main()
{
  int i,n,a,l=0,sl,sum=0;
  printf("Enter a number");
  scanf("%d",&n);
  a=n;
  if(a%10==0){
    sum=a;
    l=a;
    sl=0;}

  else if(a%10!=0){
     while(n>0){
        i=n%10;
        n=n/10;
        sum=sum+i;
	if(i>l)l=i;}
  }
  printf("Sum of digits = %d\n",sum);
  printf("Largest number = %d\n",l);
  printf("Second Largest=%d\n",sl);
  return 0;
}
  
  
    
  
  
  
