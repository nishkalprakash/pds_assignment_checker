#include<stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("enter the value for a,b,c,d:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(!((c-a)>0&&(d-b)>0))
    {
    printf("rectangle is not formed");
    return 0;
    }
  else
    {
      printf("enter the coordinate of p:");
      scanf("%d%d",&x,&y);
      if((a<x<c)&&(b<y<d)){
	printf("p lies inside the rectangle.");
      }
      else if((x==a||x==c)||(y==b||y==d)){
	  	    printf("p lies on one of the side of rectangle.");
	  }
	  else if((x==a||x==c)&&(y==b||y==d)){
	      printf("p lies on one of the points.");
	    }
	      else
		{
		  printf("p lies outside the rectangle.");
		}
		  return 0;
    }
	    }
	   

	  
	  
     
   
 
