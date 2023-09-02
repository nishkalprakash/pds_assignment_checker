#include<stdio.h>
int main()
{
  int x, y;
  printf("Enter the x-coordinate ");
  scanf("%d", &x);
  printf("Enter the y-coordinate ");
  scanf("%d", &y);
  if (x==0 && y!=0) printf ("point lies only on X-Axis");
  else {
  if (y==0 && x!=0) printf ("point lies only on Y-Axis");
  else {
  if (x==0 && y==0) printf ("point lies at origin, both X and Y axis");
  else {
  if (x>0 && y>0) printf ("point lies in quadrant 1");
  else {
  if (x<0 && y>0) printf ("point lies in quadrant 4");
  else {
  if (x<0 && y<0) printf ("point lies in quadrant 3");
  else printf ("point lies in quadrant 2");
 }
 }
 }
 }
 }
  return 0;
}
