#include<stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Enter the coordinates bottom left and top right corners of the rectangle");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(c > a && d > b)
    {
      printf("The rectangle is well defined\n");
      printf("Enter the values of x and y\n");
      scanf("%d%d", &x,&y);
      if(x>a<c && y>b<d)
	printf("The point lies inside the rectangle");
      else if(x==a && y==b)
	{
	  printf("The point lies bottom left corner of the triangle");
	}
      else if(x==c && y==d)
	{
	  printf("The point lies on the top right corner if the triangle");
	}
       else
       {
        printf("not a formed rectangle");
       }
    }
      return 0;
  }
