#include<stdio.h>
int main(){
  int a;
  int b;
  int c;
  int d;
  printf("enter a and b :");
  scanf("%d %d", &a,&b);
  printf("enter c and d : ");
  scanf("%d %d", &c,&d);
  int perim = 2*((c-a)+(d-b));
  int area =  (c-a)*(d-b);
  printf("the area and perim are : %d,%d",area,perim);
  float p;
  float q;
  p=(a+c)/2.0;
  q =(d+b)/2.0;
  printf("the point of intersection is : (%f,%f)",p,q);

  
}
