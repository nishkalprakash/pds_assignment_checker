
//23CS10031
//KAVYA RAI
#include<stdio.h>
int main()
{
  int s,n,i,j,a,b=0;
  printf("enter value of s and n :");
  scanf("%d %d",&s,&n);
  a=3+s;
  if(s>0 && s<7 && n>0 && n<11)
    {
      for(i=1;i<=n;i++)
	{
	  for(j=0;j<i;j++)
	    {  
                printf("%d",b%a+1);
                b++;                       
	    }
          printf("\n");
	}
    }
  else
    printf("wrong input.");
  return 0;
}
      
