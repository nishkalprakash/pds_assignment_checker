//name vivek
//roll no 23CS10011
#include<stdio.h>
int main(){
  int a,b,c,d,area,perim;
  float p,q;
  printf("enter co ordinates of bottom left corner");
  scanf("%d%d",&a,&b);
  printf(" enter co ordinates of top right corner");//make sure that d>b and c>a because of their positions
  scanf("%d%d",&c,&d);
 if (c>a&&d>b)
   { area=(c-a)*(d-b);
 perim=2*((c-a)+(d-b));
printf("the area is %d and perimeter is %d  ",area,perim);
p=a+c/2.0;
q=b+d/2.0;
 printf(" the point of intersection of diagonals is( %f,%f)",p,q);}
else
  printf("enter cordinates correctly");
return 0;
}
  
