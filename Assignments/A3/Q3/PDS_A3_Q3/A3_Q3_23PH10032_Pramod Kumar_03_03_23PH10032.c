//Name:pramod kumar
//roll no:23PH10032

#include<stdio.h>
int main()
{ int x,y;
  printf("enter coordinates:");
  scanf("%d %d",&x,&y);
  if(x==0&&y==0)
    printf("this coordinate is origen\n");
  else if(x>0&&y>0)
    printf("this coordinates is present in first quadrant\n");
  else if(x<0&&y<0)
    printf("this coordinate is present in third quadrant\n");
  else if(x>0&&y<0)
    printf("this coordinate is present in fourth quadrant\n");
  else if(x!=0&&y==0)
	printf("this cordinate is lies on X-axis\n");
  else if(x==0&&y!=0)
printf("this coordinate is lies on Y_axis\n");

  else printf("this coordinate is present in second quadrant\n");
  return 0;
}
