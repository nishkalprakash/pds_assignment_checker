//Roll No - 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>

int main()
{
  int s,n,m;

  printf("Enter Scale Factor : ");
  scanf("%d", &s);
  
  printf("Enter number of lines :");
  scanf("%d", &n);

  for(int i = 1; i<=n;i++)
    {
      for(int j=1;j<=(s+3);j++)
	{
	  printf("%d",j);

	  if(j==i){
	    printf("\n");
	}
      
      
    }
  return 0;
}
