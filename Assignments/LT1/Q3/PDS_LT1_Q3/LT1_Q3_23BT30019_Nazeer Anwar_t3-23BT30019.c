//ROLL NO:23BT30019
//NAME:NAZEER ANWAR
#include<stdio.h>
int main()
{
  int s,n,i,j,c=1;
    printf("Enter the scale factor in the range [1,6]: " );
  scanf("%d",&s);
  printf("Enter the number of lines in thr range [1,10]:  ");
  scanf("%d",&n);


  for(i=0;i<n;i++)
    {
      for(j=0;j<=i;j++)
	{
	  printf("%d",c);
	  if(c==(3+s)){c=0;}
	  c++;
	}
      printf("\n");
    }
}
