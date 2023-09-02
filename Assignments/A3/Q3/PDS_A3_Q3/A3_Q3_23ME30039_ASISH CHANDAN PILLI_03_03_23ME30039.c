// name: pilli asish chandan
//roll no: 23ME30039

#include<stdio.h>
#include<math.h>

int main()   {
  int x,y;
  printf("enter x and y ");
  scanf("%d, %d ", &x , &y );

  if ( x==0 && y!=0)
    printf("point is on y axis");
  else if ( x!=0 && y==0)
    printf("point lies on x axis");
  else if (x>0 && y>0)
    printf(" point in 1 st quadrant");
  else if ( x>0 && y<0)
    printf(" point in 2 nd quadranr");
  else if ( x<0 && y>0)
    printf(" point in 4 th quadrant");
  else if(x<0 && y <0)
    printf(" point in 3 rd quadrant");
  else
    printf(" enter correct values ");
  return(0);
  
 
}
  
