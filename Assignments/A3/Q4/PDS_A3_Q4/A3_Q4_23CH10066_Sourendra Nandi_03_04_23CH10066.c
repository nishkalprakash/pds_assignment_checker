//Name : Sourendra Nandi
//Roll No : 23CH10066
#include <stdio.h>
int main()
{
  int a,b,c,d;
  int x,y;
  printf("Enter the Coordinates of Bottom Left Corner : \n");
  scanf("%d%d",&a,&b);
  printf("Enter the Coordinates of Top Right Corner : \n");
  scanf("%d%d",&c,&d);
  if (a>=c || b>=d)             // Checking if rectangle is ill formed
    {
      printf("The Rectangle is Ill Formed \n Exiting Program ! \n");
    }
  else                          // Checking if rectangle is  well formed
    {
      printf("Rectangle is Well Formed \n");
      printf("Enter the Coordinates of Point P : \n");
      scanf("%d%d",&x,&y);
      printf("Point P entered : (%d,%d)\n",x,y);
      
      if ((x>a && x<c) && (y>b && y<d))         // Checking for inside Rectangle
	{
	  printf("Point P lies inside the rectangle\n");
       	}
      else if (x==a && y!=d && y!=b)
	    {
	      printf("Point P lies on Left Side\n");    //Checking for further conditions
	    }
      else if (x==a && y==d)
	    {
	      printf("P lies on Top Left Corner\n");
	    }
       else if (x==a && y==b)
	    {
	      printf("P lies on Bottom Left Corner\n");
	    }
       else if (x==c && y!=d && y!=b)
	    {
	      printf("P lies on Right side\n");
	    }
       else if (x==c && y==d)
	    {
	      printf("P lies on Top Right Corner\n");
	    }
       else if (x==c && y==b)
	    {
	      printf("P lies on Bottom Right Corner\n");
	    }
       else if (y==b && x!=a && x!=c)
	    {
	      printf("P lies on Bottom side\n");
	    }
       else if (y==d && x!=a && x!=c)
	    {
	      printf("P lies on Top side\n");
	    }
      else
	{
	  printf("P lies outside Rectangle\n");
	}
    }
  return 0;
}
      
  
