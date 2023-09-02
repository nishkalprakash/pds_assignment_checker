//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Enter the coordinates of bootom left corner\n");
  scanf("%d%d",&a,&b);
  printf("Enter the coordinates of top right corner\n");
  scanf("%d%d",&c,&d);
  if(c<=a && d<=b){
    printf("Ill formed Rectangle\n");
    return 0;
  }
  else{
    printf("Enter the coordinates of P\n");
    scanf("%d%d",&x,&y);
    if((x>a && x<c) && (y>b && y<d))
      printf("The point p lies inside Rectangle\n");
    else if(x==a){
      if(y==d)
	printf("The point p is on top left corner of rectangle\n");
      if(y<d && y>b)
	printf("The point is on left side of the rectangle\n");
      else
        printf("The point lies outside the rectangle\n");
    }
    else if(x==c){
      if(y==b)
	printf("The point p is on bottom right corner of rectangle\n");
      if(y<d && y>b)
	printf("The point is on right side of the rectangle\n");
      else
        printf("The point lies outside the rectangle\n");
    }
    else if(y==b && (x>a && x<c))
      printf("The point is on the bottom side of the rectangle\n");
    else if(y==c && (x>a && x<c))
      printf("The point is on the top side of the rectangle\n");
    else
      printf("The point lies outside the rectangle\n");
  }
  return 0;
}
   
      
    
  
    
