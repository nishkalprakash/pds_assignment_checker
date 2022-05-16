
#include <stdio.h>

int main(void) {
 int n,m,k;
  float f;
  printf("Enter day of the week(1-7):");
  scanf("%d",&n);
  printf("Enter number of machines available:");
  scanf("%d",&m);
  if (n==1){
    printf("The number of cars manufactured are %d",m);}
    else if (n==2){
      printf("The number of cars manufactured are %d",(m+m/2+m/4));}
  else if (n==3 ||n==6){
    printf("Enter the number of machines under inspection:");
    scanf("%d",&k);
    printf("The number of machines manufactured are %d",((m-k)+(m-k)/2+(m-k)/4));}
  else {
      printf("Enter boosting fraction f of m:");
      scanf("%f",&f);
      int r=m+m*f;
      printf("The number of cars manufactured are %d",r);}
  return 0;
}
