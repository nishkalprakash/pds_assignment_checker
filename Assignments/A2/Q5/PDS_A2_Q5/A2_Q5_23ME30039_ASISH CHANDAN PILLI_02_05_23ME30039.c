//Roll No.: 23ME30039
//Name. : PILLI ASISH CHANDAN

#include<stdio.h>
#include<math.h>

int main() {
  int a,b,c,d;
  printf("enter a and b");
  scanf("%d %d", &a , &b);
  printf("enter c and d");
  scanf("%d %d", &c , &d);

  int area=(c-a)*(d-b);//l*b ;
  int perim=(2*(c-a+d-b));//2(l+b);
  printf("area is %d, perim is %d \n", area,perim );

  float p,q;
  p=(a+c)/2;
  q=(b+d)/2;
  printf("the point of intersection of diagonals is %f %f", p,q);
  return(0);
}
	
  
  
