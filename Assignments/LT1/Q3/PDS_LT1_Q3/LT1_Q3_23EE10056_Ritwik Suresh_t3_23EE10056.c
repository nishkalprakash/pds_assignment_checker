//RITWIK SURESH
//23EE10056
#include<stdio.h>
int main()
{
  int s,n,l,j,cur,t=1 ;
  printf("Enter scale factor:\n");
  scanf("%d",&s);
  printf("Enter number of lines:\n");
  scanf("%d",&n);
  s = s+3;
  printf("Output:\n");
  for(l=1;l<=n;l++)
    {
      cur=1;
      while(cur<=l)
	{
	  if(t<=s){
	    printf("%d",t);
	    t++;cur++;
	  }
	  else
	    {
	      t=1;
	      printf("%d",t);
	      t++;cur++;
	    }
	}
      printf("\n");
    }
  return 0;
}
	  
