//Roll No. 23IE10031
//Name - Om Singh Jadon

#include <stdio.h>

int main()
{
  int s,n,current_num,current_line;
  printf("Enter scale factor: ");
  scanf("%d", &s);
  printf("Enter the Number of Lines: ");
  scanf("%d", &n);
  current_num=1;
  current_line=1;
  for (int k=1; k<=n; k++)                    
    {
      for (int j=1; j<=current_line; j++)
	{
	  printf("%d", current_num);
	  current_num++;
	  if (current_num==4+s) current_num=1;
	  
	}
      current_line++;
      printf("\n");
    }
}
