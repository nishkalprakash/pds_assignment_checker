#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the coordinates: ");
  scanf("%d %d", &x,&y);
  if (x==0&&y==0){
    printf(" p is in origin"); }
  else if (x>0&&y>0) {
    printf(" p is in 1st quad"); }
  else if (x>0&&y<0) {
     printf(" p is in 2nd quad"); }
 else if (x<0&&y<0) {
     printf(" p is in 3rd quad"); }
 else if (x>0&&y<0) {
     printf(" p is in 4th quad"); }
 else if (x==0&&y>0) {
   printf("p is in y-axis"); }
  else if (x>0&&y==0) {
   printf("p is in x-axis"); }
  return 0;
}
  
    
