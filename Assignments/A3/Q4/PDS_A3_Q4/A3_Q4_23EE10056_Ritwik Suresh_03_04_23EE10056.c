// Roll no. : 23EE10056
// Name : Ritwik Suresh
#include<stdio.h>
int main()
{
  int a,b,c,d,x,y ;
  printf("Enter the co-ordinates of the 1st point(a,b) :\n");
  scanf("%d %d",&a,&b);
  printf("Enter the co-ordinates of the 2nd point(c,d) :\n");
  scanf("%d %d",&c,&d);
  if(a>=c || b>=d)
    {
      printf("Ill formed rectangle\n");
      return 0;
    }
  else
    {
      printf("Enter the co-ordinates of the point(x,y) :\n");
      scanf("%d %d",&x,&y);
      if(x == a)
	{
	  if(y>b && y<d)
	    {
	      printf("(%d,%d) lies on the left side of the rectangle",x,y);
	      return 0;
	    }
	  else if(y == b)
	    {
	      printf("(%d,%d) lies on the bottom left corner of the rectangle",x,y);
	      return 0;
	    }
	  else if(y == d)
	    {
	      printf("(%d,%d) lies on the top left corner of the rectangle",x,y);
	      return 0;
	    }
	  else
	    {
	      printf("(%d,%d) lies outside the rectangle",x,y);
	      return 0;
	    }
	}
      if(x==c)
	{
	  if(y>b && y<d)
	    {
	      printf("(%d,%d) lies on the right side of the rectangle",x,y);
	      return 0;
	    }
	  else if(y == b)
	    {
	      printf("(%d,%d) lies on the bottom right corner of the rectangle",x,y);
	      return 0;
	    }
	  else if(y == d)
	    {
	      printf("(%d,%d) lies on the top right corner of the rectangle",x,y);
	      return 0;
	    }
	  else
	    {
	      printf("(%d,%d) lies outside the rectangle",x,y);
	      return 0;
	    }
	}
      if(y ==b)
	{
	  if(x>a && x<c)
	    {
	      printf("(%d,%d) lies on the bottom side of the rectangle",x,y);
	      return 0;
	    }
	  else if(x<a && x>c)
	    {
	        printf("(%d,%d) lies outside the rectangle",x,y);
	      return 0;
	    }
	}
       if(y ==d)
	{
	  if(x>a && x<c)
	    {
	      printf("(%d,%d) lies on the top side of the rectangle",x,y);
	      return 0;
	    }
	  else if(x<a || x>c)
	    {
	        printf("(%d,%d) lies outside the rectangle",x,y);
	      return 0;
	    }
	}
       else if(x>a && x<c)
	 {
	   if(y>b && y<c)
	     {
	        printf("(%d,%d) lies inside the rectangle",x,y);
		return 0;
	     }
	   else if(y<b || y>d)
	      {
	        printf("(%d,%d) lies outside the rectangle",x,y);
	      return 0;
	    }
	 }
       else if(x<a || x>c)
	   {
	        printf("(%d,%d) lies outside the rectangle",x,y);
		return 0;
	   }
    }
}
	 
      
	  
	      
	  
	  
	      
