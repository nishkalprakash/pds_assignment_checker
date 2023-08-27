//Roll no:23HS10050
//Name:Shobhit kumar


#include<stdio.h>
int main()
{
  int a,b,c,d;
  int peri,area;
  float p,q;
  
  printf("Enter the value of a,b,c,d");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  area=(c-a)*(d-b);
  peri=2*(c-a)*(d-b);
  printf("The area:%d\n",area);
  printf("The perimeter%d\n",peri);
  p=(a+c)/2;
  q=(b+d)/2;
  
  printf("The x coordinate:%f\n",p);
  printf("The y coordinate:%f\n",q);

  return 0;


}
