#include <stdio.h>
int main()
{ 
  int n,term,sum,i;
  scanf("%d",&n);
  term=1;
  sum=1;
  i=0;
  printf("start your index after -1\n");
  printf("1\n");
  printf("-1\n");
  while(i<n)
  {
  	sum= sum + term;
  	term=sum -term;
  	i=i+1;
  	
  	if (i%2==0)
  		{printf("%d\n",(sum*(-1)));}
  	else 
		{printf("%d\n",sum);}	
  		
  }
  
  if (n<=0)
	{printf("invalid");}
  return 0;			
  		
  	
  	
  
}
