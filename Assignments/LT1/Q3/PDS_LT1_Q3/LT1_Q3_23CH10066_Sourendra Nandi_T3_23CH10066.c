//Name: Sourendra Nandi
//Roll : 23CH10066
#include <stdio.h>
int main()
{
  int s,n,m,i,j,k=1;
  printf("Enter scale factor : ");    
  scanf("%d",&s);                   //input scale factor
  printf("Enter no of lines : ");
  scanf("%d",&n);            //input no.of lines
  if((n>=1 && n<=10) && (s>=1 && s<=6))      //required conditions on n and s
    {
  for (i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
	{
	  printf("%d",k);     //printing digits
	  k++;
	  if(k>3+s)
	    { 
	      k=1;          //reverting printing digit to 1 if it exceeds 3+s
	    }
	}
      printf("\n");       //going to new line
    }
    }
  else printf("Wrong inputs");
  return 0;
}

