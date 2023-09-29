//Roll No:23ME10082
//Name:Siddharth Behera
#include<stdio.h>
int main()
{
  int s,n,i,r=1,k;
  //user data giving
  printf("enter the scale factor");
  scanf("%d",&s);
  printf("enter number factor");
  scanf("%d",&n);
  //printing pattern in order
  for(i=0;i<=n;i++)
    {
      for(k=1;k<=i;k++)
	{
	  if(r==(4+s))
	    {
	      r=1;}
	  printf("%d",r);
	  r++;
	}
      printf("\n");
	}
  return 0;
}
