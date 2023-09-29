//23CS10031
//KAVYA RAI
#include<stdio.h>
#include<math.h>
int main()
{
  int n,a,c=0,b,r,i=0,arr[6],j;
    printf("Enter the no.:");
  scanf("%d",&n);
  printf("%d\n",n);
  a=n;
  b=n;
  if((n<9999)&&(n>0))
    {
      while(a>0)
	{
	 c++;
         a=a/10;
	
	}
      c=c-1;
      while(c>=0)
       {
        r=b/pow(10,c);
        printf("%d",r+1);
        b=b-r*pow(10,c);
        c--;
	
      }
    }
  else
    printf("wrong input.");
  return 0;
}
